// FUN_00e7a81c @ 00e7a81c size=784 calls_out=8 calls_in=0
// strings: failed to parse header value | invalid HTTP header name

void FUN_00e7a81c(int *param_1,int *param_2)

{
  undefined1 uVar1;
  char cVar2;
  int *piVar3;
  int *piVar4;
  undefined4 uVar5;
  byte bVar6;
  int iVar7;
  int iVar8;
  int local_138;
  int local_134;
  byte local_130;
  undefined1 auStack_12f [71];
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined1 auStack_dc [4];
  char local_d8;
  undefined2 local_d7;
  undefined1 local_d5;
  int local_a0;
  int local_9c;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 local_90;
  int local_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  int local_78;
  undefined4 local_74;
  undefined4 local_70;
  char local_68;
  undefined2 local_67;
  undefined1 local_65;
  undefined2 local_34;
  
  if (param_2[4] == -0x80000000) {
    param_1[0x12] = 1;
    iVar7 = *param_2;
    *param_1 = 0;
    param_1[1] = 0;
    *(undefined1 *)((int)param_1 + 0x46) = 2;
    param_1[0x10] = 0;
    *(undefined2 *)(param_1 + 0xe) = 0;
    param_1[6] = 2;
    param_1[7] = 0;
    param_1[8] = 0;
    param_1[9] = 4;
    param_1[10] = 0;
    param_1[0xb] = 0;
    param_1[0xc] = 4;
    param_1[0xd] = 0;
    param_1[0x13] = (int)&DAT_01c07674;
    *(short *)(param_1 + 0x11) = (short)iVar7;
    return;
  }
  FUN_007167d4(&local_138);
  if (*param_2 == 0) {
LAB_00e7a9dc:
    FUN_01bed4e2(&local_e8,auStack_12f,0x47);
    if (local_138 != 3 || local_134 != 0) {
      piVar3 = (int *)((int)param_1 + 9);
      piVar4 = &local_e8;
      uVar5 = 0x47;
      *param_1 = local_138;
      *(byte *)(param_1 + 2) = local_130;
      param_1[1] = local_134;
      goto LAB_00e7aafc;
    }
  }
  else {
    iVar7 = param_2[3];
    iVar8 = param_2[2];
    FUN_01413248(&local_78,*param_2,param_2[1]);
    if (local_78 == 0) {
      FUN_01bed4e2((int)&local_e8 + 2,&local_74,0x10);
      FUN_01bed4e2((int)&local_90 + 2,(int)&local_e8 + 2,0x10);
      FUN_01bed4e2(&local_a0,(int)&local_90 + 2,0x10);
      FUN_01ac61a4(&local_e8,iVar8,iVar7);
      cVar2 = local_d8;
      if (local_d8 != '\x02') {
        uVar1 = (undefined1)local_e8;
        FUN_01bed4e2((uint)&local_78 | 1,(uint)&local_e8 | 1,0xf);
        local_67 = local_d7;
        local_65 = local_d5;
        local_90 = local_a0;
        local_8c = local_9c;
        uStack_88 = local_98;
        uStack_84 = uStack_94;
        local_68 = cVar2;
        local_78 = CONCAT31(local_78._1_3_,uVar1);
        FUN_00714c58(&local_e8,&local_138,&local_90,&local_78);
        if (local_d8 != '\x02') {
          (**(code **)(local_e8 + 0x10))(auStack_dc,uStack_e4,uStack_e0);
        }
        goto LAB_00e7a9dc;
      }
      bVar6 = 1;
      if (local_a0 != 0) {
        (**(code **)(local_a0 + 0x10))(&uStack_94,local_9c,local_98);
      }
    }
    else {
      bVar6 = 0;
    }
    FUN_00db7680(&local_138);
    local_130 = bVar6;
  }
  if ((local_130 & 1) == 0) {
    local_70 = 0;
    local_74 = 1;
    local_78 = 0;
    iVar7 = FUN_005fdd28(&local_78,"invalid HTTP header name",0x18);
    if (iVar7 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_013073dc(&DAT_00533383,0x37,&local_90,&DAT_01c16984,&DAT_01d30334);
    }
  }
  else {
    local_70 = 0;
    local_74 = 1;
    local_78 = 0;
    iVar7 = FUN_005fdd28(&local_78,"failed to parse header value",0x1c);
    if (iVar7 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_013073dc(&DAT_00533383,0x37,&local_90,&DAT_01c16984,&DAT_01d30334);
    }
  }
  piVar4 = &local_78;
  local_8c = local_78;
  uStack_88 = local_74;
  uStack_84 = local_70;
  local_90 = CONCAT22(local_90._2_2_,500);
  FUN_007167d4(piVar4);
  local_34 = 500;
  uVar5 = 0x50;
  piVar3 = param_1;
LAB_00e7aafc:
  FUN_01bed4e2(piVar3,piVar4,uVar5);
  return;
}

