// FUN_0072e3cc @ 0072e3cc size=1192 calls_out=8 calls_in=3
// strings: 

void FUN_0072e3cc(int *param_1,undefined4 param_2,uint param_3,undefined4 param_4,uint param_5,
                 undefined4 param_6,int param_7,int param_8,undefined4 param_9,int param_10)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  bool bVar9;
  undefined8 uVar10;
  int local_94;
  int local_8c;
  int local_88;
  int local_84;
  int local_80;
  int local_78;
  int local_74;
  int local_70;
  int local_6c;
  int local_68;
  undefined2 local_64;
  char local_62;
  undefined4 local_60;
  int local_5c;
  int local_58;
  int local_54;
  uint local_50;
  int iStack_4c;
  char local_48 [4];
  int local_44;
  int local_40;
  int local_38;
  int local_34;
  char local_28;
  undefined2 local_27;
  char local_25;
  int local_24;
  uint local_20;
  int local_1c;
  
  if (param_10 == 0) {
LAB_0072e460:
    *(char *)param_1 = 'O';
    param_1[1] = 0;
    return;
  }
  if ((param_3 & 0x3f) == 0xd) {
  }
  else if (param_3 == 0xe) {
    FUN_007241b0(&local_28,param_9,param_5,param_6);
    if (local_28 != 'O') {
LAB_0072e4d4:
      *(char *)((int)param_1 + 3) = local_25;
      *(undefined2 *)((int)param_1 + 1) = local_27;
      param_1[1] = local_24;
      param_1[2] = local_20;
      param_1[3] = local_1c;
      *(char *)param_1 = local_28;
      return;
    }
    param_5 = local_20;
    param_8 = local_24;
  }
  else {
    if ((param_3 != 0xf) || (param_7 = *(int *)(param_7 + 0x68), param_7 == 0)) goto LAB_0072e460;
    FUN_007241b0(&local_28,param_9,param_5,1);
    if (local_28 != 'O') goto LAB_0072e4d4;
    param_7 = param_7 + 8;
    param_5 = local_20;
    param_8 = local_24;
  }
  cVar1 = *(char *)(param_8 + 0xd9);
  iVar6 = 4;
  if (cVar1 == '\b') {
    iVar6 = 0xc;
  }
  uVar2 = *(uint *)(param_8 + 0xd4);
  uVar7 = (iVar6 + *(int *)(param_8 + 0xdc)) - uVar2;
  uVar5 = param_5 - uVar7;
  bVar9 = uVar5 == 0;
  if (uVar7 <= param_5) {
    bVar9 = uVar2 == uVar5;
  }
  if ((uVar7 > param_5 || uVar2 < uVar5) || bVar9) {
    param_1[3] = 0;
    *param_1 = 0x3b;
    return;
  }
  local_74 = uVar2 - uVar5;
  local_6c = *(int *)(param_8 + 0x100) + 8;
  local_78 = *(int *)(param_8 + 0xd0) + uVar5;
  local_68 = 0;
  local_70 = param_8 + 0xb8;
  FUN_00719bb8(&local_60,&local_78);
  iVar8 = local_54;
  iVar6 = local_58;
  if ((char)local_60 != 'O') {
    local_62 = local_60._3_1_;
    local_64 = local_60._1_2_;
LAB_0072e158:
    *(char *)param_1 = (char)local_60;
    *(undefined2 *)((int)param_1 + 1) = local_64;
    *(char *)((int)param_1 + 3) = local_62;
    param_1[1] = local_5c;
    param_1[2] = iVar6;
    param_1[3] = iVar8;
    return;
  }
  if (local_58 == 0 && local_54 == 0) {
    cVar1 = ':';
LAB_0072e390:
    *(char *)param_1 = cVar1;
  }
  else {
    if ((local_54 == 0) && (local_58 - 1U < *(uint *)(local_6c + 8))) {
      iVar3 = (local_58 - 1U) * 0x68 + *(int *)(local_6c + 4);
    }
    else {
      iVar3 = FUN_0134bfa8(*(undefined4 *)(local_6c + 0xc),*(undefined4 *)(local_6c + 0x10),local_58
                           ,local_54);
      if (iVar3 == 0) {
        local_60._0_1_ = '\x12';
        local_5c = 0;
        goto LAB_0072e158;
      }
    }
    if (*(char *)(iVar3 + 0x62) == '\x01') {
      local_68 = local_68 + 1;
    }
    uVar10 = FUN_0134c25c();
    iVar6 = (int)((ulonglong)uVar10 >> 0x20);
    iVar8 = (int)uVar10;
    if (iVar6 != 0) {
      local_84 = 0;
      uVar4 = *(undefined4 *)(param_8 + 0x104);
      iVar6 = iVar6 << 4;
      local_88 = 0x2e;
      local_8c = 0;
      local_80 = 0;
      do {
        FUN_00716a3c(&local_60,&local_78,*(undefined4 *)(local_70 + 0x20),iVar8);
        if (local_60 == 0x2e && local_5c == 0) {
          *param_1 = local_58;
          param_1[1] = local_54;
          param_1[2] = local_50;
          param_1[3] = iStack_4c;
          return;
        }
        uVar2 = local_50 & 0xffff;
        if (uVar2 < 0x47) {
          if (uVar2 == 3) {
            FUN_00717f68(&local_38,&local_60);
            FUN_0071d020(local_48,param_7,cVar1,uVar4,&local_38);
            if (local_48[0] == 'O') {
              local_80 = local_44;
              local_94 = local_40;
              local_84 = local_44;
            }
          }
          else if (uVar2 == 0x31) goto LAB_0072e288;
        }
        else if (uVar2 == 0x47) {
LAB_0072e288:
          FUN_00717f68(&local_38,&local_60);
          local_88 = local_38;
          local_8c = local_34;
        }
        else if (uVar2 == 0x2007 || uVar2 == 0x6e) {
          FUN_00717f68(&local_38,&local_60);
          FUN_0071d020(local_48,param_7,cVar1,uVar4,&local_38);
          if (local_48[0] == 'O') goto LAB_0072e388;
        }
        iVar8 = iVar8 + 0x10;
        iVar6 = iVar6 + -0x10;
      } while (iVar6 != 0);
      if (local_80 != 0) {
        local_44 = local_84;
        local_40 = local_94;
LAB_0072e388:
        param_1[1] = local_44;
        param_1[2] = local_40;
        cVar1 = 'O';
        goto LAB_0072e390;
      }
      if (local_88 != 0x2e || local_8c != 0) {
        FUN_0072e3cc(param_1);
        return;
      }
    }
    *(char *)param_1 = 'O';
    param_1[1] = 0;
  }
  return;
}

