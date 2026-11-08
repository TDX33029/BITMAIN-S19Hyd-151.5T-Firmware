// FUN_012927ac @ 012927ac size=484 calls_out=7 calls_in=1
// strings: 

void FUN_012927ac(int *param_1,undefined4 param_2,undefined4 param_3,uint *param_4,
                 undefined4 param_5,undefined4 *param_6)

{
  undefined1 uVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined4 *puVar4;
  uint uVar5;
  int iVar6;
  int local_138;
  int local_134;
  int local_130;
  undefined1 local_128;
  undefined2 local_127;
  undefined1 local_125;
  int local_124;
  undefined4 local_120;
  uint local_11c;
  int local_118;
  undefined1 local_114;
  int local_110;
  
  FUN_015ed628(&local_138,param_2,param_3,param_5,param_6);
  FUN_016dd1aa(&local_120,param_5,param_6);
  uVar5 = local_120 >> 0x10 & 0xff;
  puVar4 = (undefined4 *)(local_120 >> 0x18);
  *(undefined1 *)((int)&local_120 + (int)param_6) = 0;
  iVar6 = -0x16;
  if (((char)local_120 != '\0' && local_120._1_1_ != '\0') &&
     (uVar5 != 0 && puVar4 != (undefined4 *)0x0)) {
    puVar4 = (undefined4 *)(local_11c & 0xff);
    if (puVar4 == (undefined4 *)0x0) {
      puVar4 = (undefined4 *)&DAT_00000004;
joined_r0x0129298c:
      if (param_6 == puVar4) {
        uVar3 = *param_4;
        puVar4 = &local_120;
        uVar5 = 0xa0000;
        local_120._1_1_ = '\0';
        software_interrupt(0);
        if (uVar3 < 0x80000000) {
          param_1[3] = uVar3;
          *param_1 = local_138;
          param_1[1] = local_134;
          param_1[2] = local_130;
          return;
        }
        iVar6 = (int)(short)uVar3;
      }
    }
    else if (param_6 != (undefined4 *)&DAT_00000004) {
      puVar4 = (undefined4 *)(local_11c >> 8 & 0xff);
      if (puVar4 == (undefined4 *)0x0) {
        puVar4 = (undefined4 *)&DAT_00000005;
        goto joined_r0x0129298c;
      }
      if (param_6 != (undefined4 *)&DAT_00000005) {
        uVar5 = local_11c >> 0x10 & 0xff;
        puVar4 = (undefined4 *)&DAT_00000006;
        if (uVar5 == 0) goto joined_r0x0129298c;
      }
    }
  }
  uVar2 = 0;
  if (local_130 < 0) {
LAB_0129282c:
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(uVar2,local_130);
  }
  if (local_130 == 0) {
    local_11c = 1;
    local_120 = 0;
  }
  else {
    local_11c = thunk_FUN_016d4a50(local_130,puVar4,uVar5,local_120._1_1_);
    local_120 = local_130;
    if (local_11c == 0) {
      uVar2 = 1;
      goto LAB_0129282c;
    }
  }
  FUN_016dd1aa(local_11c,local_134,local_130);
  uVar1 = FUN_005bc530(-iVar6);
  local_114 = 0;
  local_118 = local_130;
  local_110 = -iVar6;
  FUN_01292b38(&local_128,uVar1,&local_120);
  *(undefined1 *)(param_1 + 1) = local_128;
  *(undefined2 *)((int)param_1 + 5) = local_127;
  *(undefined1 *)((int)param_1 + 7) = local_125;
  param_1[2] = local_124;
  *param_1 = -0x80000000;
  if (local_138 == 0) {
    return;
  }
  thunk_FUN_016d3fb4(local_134);
  return;
}

