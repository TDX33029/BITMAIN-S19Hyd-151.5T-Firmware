// FUN_00b382dc @ 00b382dc size=208 calls_out=2 calls_in=11
// strings: 

int FUN_00b382dc(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined4 local_54;
  int local_50;
  int local_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  int iStack_40;
  int **local_3c;
  undefined4 local_38;
  int *local_34;
  int *local_30;
  undefined4 *local_2c;
  undefined *local_28;
  
  iVar7 = *(int *)(param_1 + 0x18);
  if (iVar7 != 0) {
    iVar3 = *(int *)(iVar7 + 0x1c);
    iVar6 = *(int *)(iVar7 + 0x20);
    if (iVar6 != 0) {
      iVar5 = iVar6 << 3;
      iVar4 = 0;
      local_54 = param_3;
      do {
        puVar1 = (undefined4 *)(iVar3 + iVar4 * 8);
        if ((puVar1[1] == 0xc) && (iVar2 = thunk_FUN_01bed842(*puVar1,param_2,0xc), iVar2 == 0)) {
          local_48 = *(undefined4 *)(iVar7 + 0x24);
          uStack_44 = *(undefined4 *)(iVar7 + 0x28);
          local_38 = 1;
          local_3c = &local_30;
          local_2c = &local_54;
          local_30 = &local_50;
          local_28 = &DAT_01c12978;
          local_50 = iVar3;
          local_4c = iVar6;
          iStack_40 = iVar4;
          local_34 = (int *)(iVar7 + 0x1c);
          FUN_01aaa3e0(param_1,&local_3c);
          return param_1;
        }
        iVar4 = iVar4 + 1;
        iVar5 = iVar5 + -8;
      } while (iVar5 != 0);
    }
  }
  return param_1;
}

