// FUN_013395fc @ 013395fc size=296 calls_out=6 calls_in=1
// strings: 

void FUN_013395fc(undefined4 *param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  int local_90;
  int local_8c;
  int local_88;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 local_68 [3];
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined1 local_4c;
  int local_48 [6];
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  iVar1 = FUN_0133c8fc(param_3);
  if (iVar1 == 0) {
    local_4c = 1;
    local_50 = 0;
    local_54 = 0;
    local_58 = 1;
    local_5c = 0;
    local_68[0] = 0;
    FUN_0133ae30(local_68,param_3);
    FUN_0133b260(&local_90,local_68,param_2);
    puVar4 = (undefined4 *)((uint)&local_90 | 4);
    uVar5 = puVar4[1];
    uVar6 = puVar4[2];
    uVar7 = puVar4[3];
    uVar8 = puVar4[4];
    if (local_90 == 0x18) {
      *param_1 = *puVar4;
      param_1[1] = uVar5;
      param_1[2] = uVar6;
      param_1[3] = uVar7;
      param_1[4] = uVar8;
      FUN_0134bd64(local_5c,local_58);
      return;
    }
    puVar3 = (undefined4 *)((uint)local_48 | 4);
    local_30 = local_78;
    uStack_2c = uStack_74;
    uStack_28 = uStack_70;
    uStack_24 = uStack_6c;
    local_48[0] = local_90;
    *puVar3 = *puVar4;
    puVar3[1] = uVar5;
    puVar3[2] = uVar6;
    puVar3[3] = uVar7;
    puVar3[4] = uVar8;
    FUN_0134bd64(local_5c,local_58);
  }
  else {
    local_88 = 0;
    local_8c = 1;
    local_90 = 0;
    FUN_0133c96c(param_3,&local_90);
    piVar2 = (int *)((uint)local_48 | 4);
    *piVar2 = local_90;
    piVar2[1] = local_8c;
    piVar2[2] = local_88;
    local_48[0] = 6;
  }
  FUN_013387b0(param_2 + 0x34,local_48);
  *param_1 = 0x12;
  return;
}

