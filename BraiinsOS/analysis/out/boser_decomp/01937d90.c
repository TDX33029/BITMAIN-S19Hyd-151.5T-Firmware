// FUN_01937d90 @ 01937d90 size=476 calls_out=8 calls_in=1
// strings: 

void FUN_01937d90(undefined4 param_1,undefined4 param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  undefined4 local_70;
  uint local_6c;
  int local_68;
  undefined4 local_64;
  int local_60;
  int local_5c;
  undefined4 local_58;
  uint local_54;
  undefined4 local_50;
  int local_4c;
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  uint local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  
  local_60 = 0;
  local_54 = local_54 & 0xffff0000;
  local_5c = 0x1b6;
  local_58 = 1;
  FUN_019a581c(&local_38,&local_60);
  local_4c = local_34;
  if ((local_38 & 0xff) == 4) {
    iVar3 = FUN_01937230();
    if (iVar3 != 0) {
      local_50 = 0;
      local_54 = 0;
      local_58 = 0;
      local_5c = 0x2000;
      local_60 = iVar3;
      while( true ) {
        while (FUN_01939768(&local_38,&local_60,FUN_019360cc,&LAB_016f8ac0), iVar2 = local_28,
              iVar1 = local_2c, iVar3 = local_30, local_38 != 0) {
          if (local_34 == 5) goto LAB_01937ebc;
          if (local_34 == 6) goto LAB_01937f14;
          local_3c = local_28;
          local_40 = local_2c;
          local_44 = local_30;
          local_48 = local_34;
          FUN_0193812c(param_3,&local_48,param_1,param_2);
        }
        if (local_30 == -0x80000000) break;
        if ((char)local_34 == '\0') {
LAB_01937ebc:
          iVar5 = param_3[2];
          if (iVar5 == *param_3) {
            FUN_018c4418(param_3);
          }
          param_3[2] = iVar5 + 1;
          piVar4 = (int *)(param_3[1] + iVar5 * 0xc);
          *piVar4 = iVar3;
          piVar4[1] = iVar1;
          piVar4[2] = iVar2;
        }
        else {
          FUN_0134bd64(local_30,local_2c);
        }
      }
LAB_01937f14:
      if (local_5c != 0) {
        thunk_FUN_01be4678(local_60);
      }
      FUN_01bf01d6(local_4c);
      return;
    }
    local_70 = 0x2000;
    local_34 = 0;
    local_38 = 0;
  }
  else {
    local_70 = 3;
  }
  local_64 = 0;
  local_6c = local_38;
  local_68 = local_34;
  FUN_0193812c(param_3,&local_70,param_1,param_2);
  return;
}

