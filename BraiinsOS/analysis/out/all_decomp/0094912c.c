// FUN_0094912c @ 0094912c size=532 calls_out=4 calls_in=1
// strings: 

int FUN_0094912c(char *param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int *piVar5;
  undefined4 *puVar6;
  undefined2 uStack_4a;
  byte local_48;
  undefined2 local_47;
  undefined2 local_45;
  
  iVar1 = FUN_00947ca4();
  if (iVar1 != 0) {
    return iVar1;
  }
  if (*param_1 == '\x01') {
                    /* WARNING: Subroutine does not return */
    FUN_00faa464(&DAT_00419463,0x28,&DAT_018a9504);
  }
  puVar6 = *(undefined4 **)(param_1 + 4);
  piVar5 = (int *)*puVar6;
  iVar1 = piVar5[2];
  if ((uint)(*piVar5 - iVar1) < 2) {
    FUN_00933680(piVar5,iVar1,2,1,1);
    iVar1 = piVar5[2];
  }
  piVar5[2] = iVar1 + 2;
  *(undefined2 *)(piVar5[1] + iVar1) = 0x203a;
  uVar2 = param_4 & 0xffff;
  piVar5 = (int *)*puVar6;
  if (uVar2 < 10000) {
    if (uVar2 < 100) {
      iVar1 = 5;
      uVar3 = param_4 & 0xffff;
      uVar2 = param_4;
    }
    else {
      uVar3 = (uint)((short)(uVar2 >> 2) * 0x147b) >> 0x11;
      local_45 = *(undefined2 *)(&DAT_0040f4ca + (param_4 + uVar3 * -100 & 0xffff) * 2);
      iVar1 = 3;
      uVar2 = uVar3;
    }
    if (9 < uVar3) {
      iVar4 = iVar1 + -2;
      *(undefined2 *)((int)&uStack_4a + iVar1) = *(undefined2 *)(&DAT_0040f4ca + uVar3 * 2);
      goto LAB_00949290;
    }
  }
  else {
    uVar2 = (uint)((short)(uVar2 >> 4) * 0x347) >> 0x13;
    param_4 = param_4 + uVar2 * -10000;
    uVar3 = (uint)((short)((param_4 & 0xffff) >> 2) * 0x147b) >> 0x11;
    local_47 = *(undefined2 *)(&DAT_0040f4ca + uVar3 * 2);
    local_45 = *(undefined2 *)(&DAT_0040f4ca + (param_4 + uVar3 * -100 & 0xffff) * 2);
    iVar1 = 1;
  }
  iVar4 = iVar1 + -1;
  *(byte *)((int)&uStack_4a + iVar1 + 1) = (byte)uVar2 | 0x30;
LAB_00949290:
  iVar1 = piVar5[2];
  uVar2 = 5 - iVar4;
  if ((uint)(*piVar5 - iVar1) < uVar2) {
    FUN_00933680(piVar5,iVar1,uVar2,1,1);
    iVar1 = piVar5[2];
  }
  FUN_016dd1aa(piVar5[1] + iVar1,&local_48 + iVar4,uVar2);
  piVar5[2] = iVar1 + uVar2;
  *(undefined1 *)(puVar6 + 4) = 1;
  return 0;
}

