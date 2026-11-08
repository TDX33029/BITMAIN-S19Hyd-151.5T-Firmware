// FUN_000171dc @ 000171dc  size=692  callers=1
// program: bmminer


void FUN_000171dc(void)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  uint in_fpscr;
  float fVar4;
  byte local_201c;
  char local_2018 [8196];
  
  if ((((byte)DAT_00a6c8bc & 2) == 0) || (local_201c = DAT_00a6c8c0._2_1_, 100 < DAT_00a6c8c0._2_1_)
     ) {
    if (DAT_000bfb48 == 3) {
      iVar1 = FUN_00019e50();
    }
    else {
      iVar1 = FUN_00019ae8(0);
    }
    if (0x41 < iVar1) {
      if ((DAT_000bfb48 == 0) || (DAT_000bfb48 != 3)) {
        iVar1 = FUN_00019d24();
        uVar2 = FUN_00019ae8(0);
      }
      else {
        iVar1 = FUN_00019e18();
        uVar2 = FUN_00019e50();
      }
      DAT_000bfa90 = (float)VectorSignedToFloat(uVar2,(byte)(in_fpscr >> 0x16) & 3);
      FUN_00016d64();
      if (4 < DAT_000be63c) {
        snprintf(local_2018,0x2000,"feedback: %f, input: %d\n",(double)DAT_000bfa90,100);
        FUN_0004948c(4,local_2018,0);
        if (4 < DAT_000be63c) {
          snprintf(local_2018,0x2000,"new input: %d\n",100);
          FUN_0004948c(4,local_2018,0);
        }
      }
      FUN_000170ac(100);
      if (DAT_000be63c < 5) {
        return;
      }
      builtin_strncpy(local_2018," Air out temprature is too high, set fixed full fan speed\n",0x3b)
      ;
      FUN_0004948c(4,local_2018,0);
      if (DAT_000be63c < 5) {
        return;
      }
      snprintf(local_2018,0x2000,"PWM keep 100:  airin_temp=%d, airout_temp=%f\n",iVar1,
               (double)DAT_000bfa90);
      FUN_0004948c(4,local_2018,0);
      return;
    }
    iVar1 = FUN_0002a904();
    if ((DAT_000bfb48 == 0) || (DAT_000bfb48 != 3)) {
      uVar2 = FUN_00019ae8(0);
      DAT_000bfa90 = (float)VectorSignedToFloat(uVar2,(byte)(in_fpscr >> 0x16) & 3);
    }
    else {
      uVar2 = FUN_00019e50();
      DAT_000bfa90 = (float)VectorSignedToFloat(uVar2,(byte)(in_fpscr >> 0x16) & 3);
    }
    fVar4 = (float)FUN_00016d64();
    iVar3 = FUN_0002a904();
    if ((int)fVar4 + iVar1 == iVar3) {
      return;
    }
    fVar4 = (float)VectorSignedToFloat((int)fVar4 + iVar1,(byte)(in_fpscr >> 0x16) & 3);
    if (DAT_000bfa88 < fVar4) {
      if (fVar4 <= DAT_000bfa84) {
        local_201c = (0.0 < fVar4) * (char)(int)fVar4;
        goto LAB_000172b4;
      }
    }
    else if (DAT_000bfa88 <= DAT_000bfa84) {
      local_201c = (0.0 < DAT_000bfa88) * (char)(int)DAT_000bfa88;
      goto LAB_000172b4;
    }
    local_201c = (0.0 < DAT_000bfa84) * (char)(int)DAT_000bfa84;
  }
LAB_000172b4:
  FUN_000170ac(local_201c);
  return;
}

