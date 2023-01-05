public class AlimentEner extends Aliment
{
	
		private float mLipide;
		private float mGlucide;
		private float mProteine;
		
		public AlimentEner()
		{
			System.out.println("creation d'un Aliment energetique\n");
		}

		public void setEner(float lip, float glu, float pro)
		{
			this.mLipide=lip;
			this.mGlucide=glu;
			this.mProteine=pro;
		}

		public float getLipide()
		{
			 return this.mLipide;
		}
		public float getGlucide()
		{
			return this.mGlucide;

		}
		public float getProteine()
		{
			return this.mProteine;
		}

};