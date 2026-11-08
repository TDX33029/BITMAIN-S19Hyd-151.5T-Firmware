// FUN_0002ecfc @ 0002ecfc  size=380  callers=0
// program: bmminer


void FUN_0002ecfc(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  uint in_fpscr;
  undefined4 uVar3;
  undefined4 extraout_s1;
  undefined4 extraout_s1_00;
  double dVar4;
  double dVar5;
  char local_2020 [8200];
  
  local_2020[4] = '\0';
  local_2020[5] = '\0';
  local_2020[6] = '\0';
  local_2020[7] = '\0';
  local_2020[0] = '\0';
  local_2020[1] = '\0';
  local_2020[2] = '\0';
  local_2020[3] = '\0';
  if (param_1 == 0) {
    if (((DAT_00a5d20d != '\0') || (DAT_008c702d != '\0')) || (2 < DAT_000be644)) {
      snprintf(local_2020 + 8,0x2000,"%s: input bad json param\n","api_miner_power_jt");
      FUN_0004948c(3,local_2020 + 8,0);
      return;
    }
  }
  else {
    iVar1 = FUN_0002af44();
    uVar2 = FUN_0002af88();
    dVar5 = (double)VectorSignedToFloat(uVar2,(byte)(in_fpscr >> 0x16) & 3);
    dVar4 = (double)VectorSignedToFloat(iVar1,(byte)(in_fpscr >> 0x16) & 3);
    if (dVar5 * 1.05 < dVar4) {
      DAT_000c7098 = DAT_000c7098 | 1;
    }
    else {
      DAT_000c7098 = DAT_000c7098 & 0xfffffffe;
    }
    uVar2 = FUN_00080784(iVar1,iVar1 >> 0x1f);
    FUN_0007ec50(param_1,&DAT_0009da30,uVar2);
    uVar2 = FUN_0002af78();
    uVar3 = FUN_0002af98();
    if ((double)CONCAT44(extraout_s1_00,uVar3) * 1.05 < (double)CONCAT44(extraout_s1,uVar2)) {
      DAT_000c7098 = DAT_000c7098 | 2;
    }
    else {
      DAT_000c7098 = DAT_000c7098 & 0xfffffffd;
    }
    snprintf(local_2020,8,"%.2f",(double)CONCAT44(extraout_s1,uVar2));
    uVar2 = FUN_00080268(local_2020);
    FUN_0007ec50(param_1,&DAT_0009da38,uVar2);
  }
  return;
}

