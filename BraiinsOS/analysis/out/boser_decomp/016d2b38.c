// FUN_016d2b38 @ 016d2b38 size=328 calls_out=5 calls_in=0
// strings: 

void FUN_016d2b38(int *param_1,int param_2,undefined4 *param_3)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  int local_70;
  int local_6c;
  int local_68;
  int local_64;
  uint local_60;
  int iStack_5c;
  int local_58;
  int iStack_54;
  int iStack_50;
  int iStack_4c;
  int iStack_48;
  int local_44;
  int iStack_40;
  int iStack_3c;
  int iStack_38;
  int iStack_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 uStack_28;
  
  local_30 = 0;
  local_2c = 0;
  FUN_01691d3c(&local_70,param_2,&local_30);
  iVar2 = local_6c;
  if (local_70 == 0x2a) {
    if ((param_3[2] == 0) ||
       (uVar1 = *(ushort *)(param_3 + 4), *(short *)(param_3 + 4) = (short)(uVar1 + 1),
       (uVar1 + 1 & 0x10000) != 0)) {
      local_64 = 0;
      local_6c = 4;
      local_68 = 0;
      local_70 = 0;
      local_60 = local_60 & 0xffff0000;
      FUN_016c116c(&local_30,&local_70,param_3[3]);
      FUN_016c1e84(param_3);
      *param_3 = local_30;
      param_3[1] = local_2c;
      param_3[2] = uStack_28;
    }
    puVar4 = (undefined4 *)param_3[6];
    iVar5 = param_3[7];
    param_3[7] = 0;
    for (iVar3 = 0; iVar5 != iVar3; iVar3 = iVar3 + 1) {
      FUN_0134aee0(puVar4[iVar3 * 4],(puVar4 + iVar3 * 4)[1],4,8);
    }
    if (param_3[5] == 0) {
      FUN_018fa978();
      puVar4 = (undefined4 *)param_3[6];
    }
    *(undefined1 *)(puVar4 + 3) = 0;
    *puVar4 = 0;
    puVar4[1] = 4;
    puVar4[2] = 0;
    *param_1 = 0x2a;
    param_1[1] = param_2;
    param_1[2] = (int)param_3;
    param_1[3] = iVar2;
    param_3[7] = 1;
  }
  else {
    param_1[2] = local_68;
    param_1[3] = local_64;
    param_1[4] = local_60;
    param_1[5] = iStack_5c;
    param_1[6] = local_58;
    param_1[7] = iStack_54;
    param_1[8] = iStack_50;
    param_1[9] = iStack_4c;
    param_1[10] = iStack_48;
    param_1[0xb] = local_44;
    param_1[0xc] = iStack_40;
    param_1[0xd] = iStack_3c;
    param_1[0xe] = iStack_38;
    param_1[0xf] = iStack_34;
    *param_1 = local_70;
    param_1[1] = local_6c;
  }
  return;
}

