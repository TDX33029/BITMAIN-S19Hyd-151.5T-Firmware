// FUN_0168da60 @ 0168da60 size=216 calls_out=2 calls_in=0
// strings: 

bool FUN_0168da60(uint *param_1,undefined4 *param_2,uint param_3,uint param_4)

{
  int iVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined4 local_58;
  uint uStack_54;
  uint uStack_50;
  undefined4 local_4c;
  uint local_48;
  undefined4 local_44;
  undefined1 local_40;
  undefined4 local_3c;
  uint local_38;
  undefined2 local_34;
  undefined8 local_30;
  int *local_28;
  undefined4 *local_24;
  
  uVar2 = 1;
  if ((int)*param_1 < 0) {
    uVar2 = *param_1 ^ 0x80000000;
  }
  if (uVar2 == 0) {
    param_3 = 1;
    param_4 = 0;
  }
  else if (uVar2 == 1) {
    param_3 = param_1[1];
    param_4 = param_1[2];
  }
  local_34 = 1;
  local_40 = 1;
  local_3c = 0;
  local_44 = 0xd;
  local_4c = 0;
  local_58 = 0xd;
  uStack_54 = param_3;
  uStack_50 = param_4;
  local_48 = param_4;
  local_38 = param_4;
  do {
    uVar3 = FUN_015bb1b4(&local_58);
    if ((int)uVar3 == 0) break;
    local_24 = &DAT_0157d360;
    local_28 = (int *)&local_30;
    local_30 = uVar3;
    iVar1 = FUN_00fa948c(*param_2,param_2[1],&DAT_00590e71,&local_28);
  } while (iVar1 == 0);
  return (int)uVar3 != 0;
}

