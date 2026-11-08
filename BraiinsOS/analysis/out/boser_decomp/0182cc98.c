// FUN_0182cc98 @ 0182cc98 size=252 calls_out=3 calls_in=1
// strings: 

void FUN_0182cc98(undefined4 param_1,uint *param_2,uint *param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined1 auStack_50 [4];
  char local_4c;
  uint local_48;
  uint uStack_44;
  uint uStack_40;
  uint uStack_3c;
  uint uStack_38;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  uVar2 = *param_2;
  uVar3 = param_2[1];
  *(undefined1 *)(param_3 + 4) = 1;
  iVar1 = 2;
  if ((uint)(uVar2 < 3) <= -uVar3) {
    iVar1 = uVar2 - 3;
  }
  if (iVar1 == 0) {
    FUN_0182c868(param_2,-(uVar3 + (uVar2 >= 3)));
    *param_2 = 4;
    param_2[1] = 0;
    uVar2 = param_3[1];
    uVar3 = param_3[2];
    uVar4 = param_3[3];
    uVar5 = param_3[4];
    param_2[2] = *param_3;
    param_2[3] = uVar2;
    param_2[4] = uVar3;
    param_2[5] = uVar4;
    param_2[6] = uVar5;
  }
  else if (iVar1 == 1) {
    (**(code **)(param_2[2] + 0x10))(param_2 + 5,param_2[3],param_2[4]);
    uVar2 = param_3[1];
    uVar3 = param_3[2];
    uVar4 = param_3[3];
    uVar5 = param_3[4];
    param_2[2] = *param_3;
    param_2[3] = uVar2;
    param_2[4] = uVar3;
    param_2[5] = uVar4;
    param_2[6] = uVar5;
  }
  else {
    local_48 = *param_3;
    uStack_44 = param_3[1];
    uStack_40 = param_3[2];
    uStack_3c = param_3[3];
    uStack_38 = param_3[4];
    local_30 = 0;
    uStack_2c = 0x33;
    uStack_28 = 0;
    uStack_24 = 0;
    FUN_0141d310(&iStack_5c,param_2);
    if (local_4c != '\x02') {
      (**(code **)(iStack_5c + 0x10))(auStack_50,uStack_58,uStack_54);
    }
  }
  FUN_01bed4e2(param_1,param_2,0x88);
  return;
}

