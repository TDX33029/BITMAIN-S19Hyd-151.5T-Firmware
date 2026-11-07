// FUN_00e606c4 @ 00e606c4 size=592 calls_out=7 calls_in=0
// strings: tuner_mode

int FUN_00e606c4(char *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 *puVar2;
  int *piVar3;
  uint local_38;
  undefined4 *local_34;
  undefined4 local_30;
  undefined4 local_2c;
  
  if (*param_1 == '\x01') {
                    /* WARNING: Subroutine does not return */
    FUN_00faa464(&DAT_00419463,0x28,&DAT_018a94f4);
  }
  puVar2 = *(undefined4 **)(param_1 + 4);
  if (param_1[1] != '\x01') {
    piVar3 = (int *)*puVar2;
    iVar1 = piVar3[2];
    if (*piVar3 == iVar1) {
      FUN_00edff4c(piVar3,iVar1,1,1,1);
      iVar1 = piVar3[2];
    }
    *(undefined1 *)(piVar3[1] + iVar1) = 0x2c;
    piVar3[2] = iVar1 + 1;
  }
  param_1[1] = '\x02';
  FUN_00e5d350(&local_30,*puVar2,&DAT_00418440,7);
  if ((char)local_30 != '\x04') {
    iVar1 = FUN_0157c4a0(local_30,local_2c);
    return iVar1;
  }
  piVar3 = (int *)*puVar2;
  iVar1 = piVar3[2];
  if (*piVar3 == iVar1) {
    FUN_00edff4c(piVar3,iVar1,1,1,1);
    iVar1 = piVar3[2];
  }
  *(undefined1 *)(piVar3[1] + iVar1) = 0x3a;
  piVar3[2] = iVar1 + 1;
  piVar3 = (int *)*puVar2;
  iVar1 = piVar3[2];
  if (*piVar3 == iVar1) {
    FUN_00edff4c(piVar3,iVar1,1,1,1);
    iVar1 = piVar3[2];
  }
  *(undefined1 *)(piVar3[1] + iVar1) = 0x7b;
  piVar3[2] = iVar1 + 1;
  local_38 = CONCAT22(local_38._2_2_,0x100);
  local_34 = puVar2;
  iVar1 = FUN_00e647d0(&local_38,"tuner_mode",10,param_2,param_3);
  if (iVar1 == 0) {
    if ((char)local_38 == '\x01') {
      local_30 = 10;
      iVar1 = FUN_0157c50c(&local_30,0,0);
      return iVar1;
    }
    iVar1 = FUN_00e63084(&local_38,param_4);
    if (iVar1 == 0) {
      iVar1 = 0;
      if (((local_38 & 0xff00) != 0) && ((local_38 & 1) == 0)) {
        piVar3 = (int *)*local_34;
        iVar1 = piVar3[2];
        if (*piVar3 == iVar1) {
          FUN_00edff4c(piVar3,iVar1,1,1,1);
          iVar1 = piVar3[2];
        }
        *(undefined1 *)(piVar3[1] + iVar1) = 0x7d;
        piVar3[2] = iVar1 + 1;
        return 0;
      }
    }
  }
  return iVar1;
}

