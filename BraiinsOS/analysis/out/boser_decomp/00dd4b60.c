// FUN_00dd4b60 @ 00dd4b60 size=364 calls_out=4 calls_in=1
// strings: 

void FUN_00dd4b60(int *param_1,int *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 *local_2c;
  undefined1 *local_28;
  
  iVar6 = *param_2;
  iVar4 = param_2[1];
  iVar7 = param_2[3];
  iVar1 = param_2[2];
  if (iVar4 == iVar7) {
    iVar5 = iVar6;
  }
  else {
    iVar5 = 0;
    do {
      puVar2 = (undefined4 *)(iVar4 + iVar5);
      local_38 = *puVar2;
      uVar3 = puVar2[1];
      local_30 = puVar2[2];
      param_2[1] = (int)(puVar2 + 3);
      local_34 = uVar3;
      FUN_01304e7c(&local_48,uVar3,local_30);
      puVar2 = (undefined4 *)(iVar6 + iVar5);
      if ((char)local_48 == '\0') {
        local_48 = 0x80000000;
      }
      else {
        local_28 = &LAB_00632348;
        local_2c = &local_38;
        FUN_00664898(&local_48,&DAT_00593d0a,&local_2c);
        uVar3 = local_34;
      }
      FUN_019bb7e0(local_38,uVar3);
      iVar5 = iVar5 + 0xc;
      *puVar2 = local_48;
      puVar2[1] = uStack_44;
      puVar2[2] = uStack_40;
    } while (iVar4 + iVar5 != iVar7);
    iVar4 = iVar4 + iVar5;
    iVar5 = iVar6 + iVar5;
  }
  puVar2 = (undefined4 *)(iVar4 + 4);
  *param_2 = 4;
  param_2[1] = 4;
  param_2[2] = 0;
  param_2[3] = 4;
  for (iVar4 = ((uint)(iVar7 - iVar4) >> 2) * -0x55555555; iVar4 != 0; iVar4 = iVar4 + -1) {
    FUN_019bb7e0(puVar2[-1],*puVar2);
    puVar2 = puVar2 + 3;
  }
  *param_1 = iVar1;
  param_1[1] = iVar6;
  param_1[2] = ((uint)(iVar5 - iVar6) >> 2) * -0x55555555;
  FUN_01323e8c(param_2);
  return;
}

