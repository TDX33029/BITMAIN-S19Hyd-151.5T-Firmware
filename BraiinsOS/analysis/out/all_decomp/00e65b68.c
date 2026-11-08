// FUN_00e65b68 @ 00e65b68 size=656 calls_out=8 calls_in=0
// strings: reasonpoll_readyConnection

int FUN_00e65b68(char *param_1,int *param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  int iVar6;
  uint local_38;
  undefined4 *local_34;
  undefined4 local_30;
  undefined4 local_2c;
  
  if (*param_1 == '\x01') {
                    /* WARNING: Subroutine does not return */
    FUN_00faa464(&DAT_00419463,0x28,&DAT_018a94f4);
  }
  puVar4 = *(undefined4 **)(param_1 + 4);
  if (param_1[1] != '\x01') {
    piVar2 = (int *)*puVar4;
    iVar1 = piVar2[2];
    if (*piVar2 == iVar1) {
      FUN_00edff4c(piVar2,iVar1,1,1,1);
      iVar1 = piVar2[2];
    }
    *(undefined1 *)(piVar2[1] + iVar1) = 0x2c;
    piVar2[2] = iVar1 + 1;
  }
  param_1[1] = '\x02';
  FUN_00e5d350(&local_30,*puVar4,&DAT_00418440,7);
  if ((char)local_30 != '\x04') {
    iVar1 = FUN_0157c4a0(local_30,local_2c);
    return iVar1;
  }
  piVar2 = (int *)*puVar4;
  iVar1 = piVar2[2];
  if (*piVar2 == iVar1) {
    FUN_00edff4c(piVar2,iVar1,1,1,1);
    iVar1 = piVar2[2];
  }
  iVar3 = *param_2;
  iVar6 = param_2[1];
  *(undefined1 *)(piVar2[1] + iVar1) = 0x3a;
  piVar2[2] = iVar1 + 1;
  puVar5 = (undefined4 *)param_2[2];
  piVar2 = (int *)*puVar4;
  iVar1 = piVar2[2];
  if (*piVar2 == iVar1) {
    FUN_00edff4c(piVar2,iVar1,1,1,1);
    iVar1 = piVar2[2];
  }
  *(undefined1 *)(piVar2[1] + iVar1) = 0x7b;
  piVar2[2] = iVar1 + 1;
  local_38 = CONCAT22(local_38._2_2_,0x100);
  local_34 = puVar4;
  iVar1 = FUN_00e647d0(&local_38,"reasonpoll_readyConnection",6,*(undefined4 *)(iVar3 + 4),
                       *(undefined4 *)(iVar3 + 8));
  if (iVar1 == 0) {
    if ((char)local_38 != '\0') {
LAB_00e65d24:
      local_30 = 10;
      iVar1 = FUN_0157c50c(&local_30,0,0);
      return iVar1;
    }
    iVar1 = FUN_00e61384(&local_38,&DAT_00568e58,4,iVar6);
    if (iVar1 == 0) {
      if ((char)local_38 != '\0') goto LAB_00e65d24;
      iVar1 = FUN_00e65e10(puVar5[1],&local_38,&DAT_00414725,5,*puVar5);
      if (iVar1 == 0) {
        iVar1 = 0;
        if (((local_38 & 0xff00) != 0) && ((local_38 & 1) == 0)) {
          piVar2 = (int *)*local_34;
          iVar1 = piVar2[2];
          if (*piVar2 == iVar1) {
            FUN_00edff4c(piVar2,iVar1,1,1,1);
            iVar1 = piVar2[2];
          }
          *(undefined1 *)(piVar2[1] + iVar1) = 0x7d;
          piVar2[2] = iVar1 + 1;
          return 0;
        }
      }
    }
  }
  return iVar1;
}

