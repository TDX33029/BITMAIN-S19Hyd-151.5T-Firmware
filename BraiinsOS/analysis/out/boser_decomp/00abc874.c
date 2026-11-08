// FUN_00abc874 @ 00abc874 size=236 calls_out=2 calls_in=3
// strings: 

void FUN_00abc874(undefined4 *param_1,int param_2)

{
  undefined8 uVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined1 local_68 [4];
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  int local_58 [2];
  undefined8 local_50;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  
  if (*(int *)(param_2 + 0x10) == -0x80000000) {
    param_1[2] = 1;
    param_1[3] = 0;
    *param_1 = 0;
    FUN_00abbec8(param_2);
    return;
  }
  if (*(int *)(param_2 + 0x10) == -0x7ffffff9) {
    param_1[2] = 0;
    param_1[3] = 0;
    *param_1 = 0;
  }
  else {
    FUN_006bde48(local_58);
    if (local_58[0] == 0) {
      *param_1 = 0;
      param_1[2] = 2;
      param_1[3] = 0;
      *(undefined8 *)(param_1 + 4) = local_50;
    }
    else {
      puVar2 = (undefined4 *)((uint)local_58 | 4);
      uVar3 = *puVar2;
      uVar1 = *(undefined8 *)(puVar2 + 1);
      puVar2 = (undefined4 *)((uint)local_68 | 4);
      *puVar2 = local_44;
      puVar2[1] = uStack_40;
      puVar2[2] = uStack_3c;
      param_1[4] = local_48;
      param_1[5] = uStack_64;
      param_1[6] = uStack_60;
      param_1[7] = uStack_5c;
      *(undefined8 *)(param_1 + 2) = uVar1;
      *param_1 = 1;
      param_1[1] = uVar3;
    }
  }
  return;
}

