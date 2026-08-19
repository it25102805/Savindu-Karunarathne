public class RoboPet {
	protected String name;
	protected String model_number;
	protected int battery_level;
	
	public RoboPet(){
		this.name = " test name"
		this.model_number = "test number"
		this.battery_level = 0;
	}
	
	public RoboPet() {
		System.out.println("RoboPet Constructor called !");
	}
	
	public RoboPet (String pName, String modelNo, int pBattery){
		this.name = pName;
		this.model_number = modelNo;
		this.battery_level = pBattery;
	}
	
	class RoboDog extends RoboPet {
		private int guardLevel;
		
		public void guard(){
			System.out.println("RoboDog is guarding");
		}
	}
	
	class RoboCat extends RoboPet {
		private double ClimbHieght;
		
		public void climb(){
			
			System.out.println("RoboCat is climbing");
		}
	}
		
	class RoboCat extends RoboBird{
		private double flying;
			
		public void flyRange(){
			System.out,println("RoboBird is flying");
		}
	}
		
		public void recharge(){
			this.battery_level = 100;
			System.out.println("Battery charged to 100%");
		}
}
	

	
	