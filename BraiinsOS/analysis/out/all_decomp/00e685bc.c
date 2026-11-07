// FUN_00e685bc @ 00e685bc size=484 calls_out=6 calls_in=2
// strings: 

int FUN_00e685bc(char *param_1)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  undefined4 *puVar4;
  ulonglong in_d0;
  undefined4 local_38 [6];
  
  if (*param_1 != '\0') {
    local_38[0] = 10;
    iVar1 = FUN_0157c50c(local_38,0,0);
    return iVar1;
  }
  iVar1 = FUN_00e5b230(param_1);
  if (iVar1 != 0) {
    return iVar1;
  }
  if (*param_1 == '\x01') {
                    /* WARNING: Subroutine does not return */
    FUN_00faa464(&DAT_00419463,0x28,&DAT_018a9504);
  }
  puVar4 = *(undefined4 **)(param_1 + 4);
  piVar3 = (int *)*puVar4;
  iVar1 = piVar3[2];
  if ((uint)(*piVar3 - iVar1) < 2) {
    FUN_00edff4c(piVar3,iVar1,2,1,1);
    iVar1 = piVar3[2];
  }
  uVar2 = (uint)(in_d0 >> 0x20);
  piVar3[2] = iVar1 + 2;
  *(undefined2 *)(piVar3[1] + iVar1) = 0x203a;
  piVar3 = (int *)*puVar4;
  if ((int)in_d0 == 0 && (in_d0 & 0xfffff00000000) == 0) {
    if ((int)in_d0 != 0 || (uVar2 & 0x7fffffff) != 0x7ff00000) goto LAB_00e686a4;
  }
  else if ((~uVar2 & 0x7ff00000) != 0) {
LAB_00e686a4:
    iVar1 = FUN_016d1b20(local_38);
    uVar2 = iVar1 - (int)local_38;
    iVar1 = piVar3[2];
    if ((uint)(*piVar3 - iVar1) < uVar2) {
      FUN_00edff4c(piVar3,iVar1,uVar2,1,1);
      iVar1 = piVar3[2];
    }
    FUN_016dd1aa(piVar3[1] + iVar1,local_38,uVar2);
    iVar1 = iVar1 + uVar2;
    goto LAB_00e686e4;
  }
  iVar1 = piVar3[2];
  if ((uint)(*piVar3 - iVar1) < 4) {
    FUN_00edff4c(piVar3,iVar1,4,1,1);
    iVar1 = piVar3[2];
  }
  *(undefined4 *)(piVar3[1] + iVar1) = 0x6c6c756e;
  iVar1 = iVar1 + 4;
LAB_00e686e4:
  piVar3[2] = iVar1;
  *(undefined1 *)(puVar4 + 4) = 1;
  return 0;
}

