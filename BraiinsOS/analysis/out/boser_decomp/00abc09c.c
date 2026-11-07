// FUN_00abc09c @ 00abc09c size=236 calls_out=3 calls_in=4
// strings: 

void FUN_00abc09c(int *param_1,int param_2)

{
  int iVar1;
  undefined1 uVar2;
  undefined1 auStack_70 [11];
  undefined1 auStack_65 [13];
  int local_58;
  undefined4 local_54;
  undefined4 uStack_50;
  undefined4 local_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  int local_38;
  undefined4 local_34;
  undefined4 uStack_30;
  undefined4 local_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  
  if (*(int *)(param_2 + 0x10) == -0x80000000) {
    *param_1 = 2;
    *(undefined1 *)(param_1 + 1) = 3;
    FUN_00abbec8(param_2);
    return;
  }
  if (*(int *)(param_2 + 0x10) == -0x7ffffff9) {
    *param_1 = 2;
    *(undefined1 *)(param_1 + 1) = 2;
  }
  else {
    FUN_006dec3c(&local_58);
    if (local_58 == 2) {
      uVar2 = (undefined1)local_54;
    }
    else {
      local_38 = local_58;
      local_34 = local_54;
      uStack_30 = uStack_50;
      local_2c = local_4c;
      uStack_28 = uStack_48;
      uStack_24 = uStack_44;
      uStack_20 = uStack_40;
      FUN_01bed4e2(auStack_65,&uStack_48,0xc);
      iVar1 = local_38;
      uVar2 = (undefined1)local_34;
      FUN_01bed4e2(auStack_70,(uint)&local_58 | 5,0xb);
      if (iVar1 != 2) {
        FUN_01bed4e2((int)param_1 + 5,auStack_70,0x17);
        *(undefined1 *)(param_1 + 1) = uVar2;
        *param_1 = iVar1;
        return;
      }
    }
    *(undefined1 *)(param_1 + 1) = uVar2;
    *param_1 = 2;
  }
  return;
}

