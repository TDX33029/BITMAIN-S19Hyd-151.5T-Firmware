// FUN_00e6504c @ 00e6504c size=548 calls_out=6 calls_in=1
// strings: 

undefined4 FUN_00e6504c(char *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  undefined4 *puVar5;
  ulonglong in_d0;
  undefined4 local_38;
  undefined4 local_34;
  
  if (*param_1 == '\x01') {
                    /* WARNING: Subroutine does not return */
    FUN_00faa464(&DAT_00419463,0x28,&DAT_018a94f4);
  }
  puVar5 = *(undefined4 **)(param_1 + 4);
  if (param_1[1] != '\x01') {
    piVar4 = (int *)*puVar5;
    iVar2 = piVar4[2];
    if (*piVar4 == iVar2) {
      FUN_00edff4c(piVar4,iVar2,1,1,1);
      iVar2 = piVar4[2];
    }
    *(undefined1 *)(piVar4[1] + iVar2) = 0x2c;
    piVar4[2] = iVar2 + 1;
  }
  param_1[1] = '\x02';
  FUN_00e5d350(&local_38,*puVar5,param_2,param_3);
  if ((char)local_38 != '\x04') {
    uVar1 = FUN_0157c4a0(local_38,local_34);
    return uVar1;
  }
  piVar4 = (int *)*puVar5;
  iVar2 = piVar4[2];
  if (*piVar4 == iVar2) {
    FUN_00edff4c(piVar4,iVar2,1,1,1);
    iVar2 = piVar4[2];
  }
  uVar3 = (uint)(in_d0 >> 0x20);
  *(undefined1 *)(piVar4[1] + iVar2) = 0x3a;
  piVar4[2] = iVar2 + 1;
  piVar4 = (int *)*puVar5;
  if ((int)in_d0 == 0 && (in_d0 & 0xfffff00000000) == 0) {
    if ((int)in_d0 != 0 || (uVar3 & 0x7fffffff) != 0x7ff00000) goto LAB_00e65168;
  }
  else if ((~uVar3 & 0x7ff00000) != 0) {
LAB_00e65168:
    iVar2 = FUN_016d1b20(&local_38);
    uVar3 = iVar2 - (int)&local_38;
    iVar2 = piVar4[2];
    if ((uint)(*piVar4 - iVar2) < uVar3) {
      FUN_00edff4c(piVar4,iVar2,uVar3,1,1);
      iVar2 = piVar4[2];
    }
    FUN_016dd1aa(piVar4[1] + iVar2,&local_38,uVar3);
    iVar2 = iVar2 + uVar3;
    goto LAB_00e651a4;
  }
  iVar2 = piVar4[2];
  if ((uint)(*piVar4 - iVar2) < 4) {
    FUN_00edff4c(piVar4,iVar2,4,1,1);
    iVar2 = piVar4[2];
  }
  *(undefined4 *)(piVar4[1] + iVar2) = 0x6c6c756e;
  iVar2 = iVar2 + 4;
LAB_00e651a4:
  piVar4[2] = iVar2;
  return 0;
}

