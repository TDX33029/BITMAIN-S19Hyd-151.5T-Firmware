// FUN_00df0c40 @ 00df0c40 size=452 calls_out=5 calls_in=1
// strings: 

void FUN_00df0c40(undefined4 *param_1,int *param_2)

{
  int iVar1;
  int *piVar2;
  undefined1 auStack_100 [80];
  undefined4 local_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  int local_a0;
  int iStack_9c;
  int iStack_98;
  int local_94;
  int local_90;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  int local_7c;
  undefined1 auStack_78 [84];
  
  piVar2 = param_2 + 6;
  if (*piVar2 == -0x7fffffff) {
LAB_00df0c98:
    param_2[6] = -0x7fffffff;
    if (*param_2 != 3) {
      do {
        iVar1 = FUN_0141ea00(param_2);
        if (iVar1 == 0) {
          if (-0x7fffffff < *piVar2) {
            FUN_019bb7e0(*piVar2,param_2[7]);
          }
          goto LAB_00df0cac;
        }
        FUN_006643f0(&local_a0,*(undefined4 *)(iVar1 + 4),*(undefined4 *)(iVar1 + 8));
        local_90 = CONCAT31(local_90._1_3_,1);
        local_94 = 0;
        if (-0x7fffffff < *piVar2) {
          FUN_019bb7e0(*piVar2,param_2[7]);
        }
        *piVar2 = local_a0;
        param_2[7] = iStack_9c;
        param_2[8] = iStack_98;
        param_2[9] = local_94;
        param_2[10] = local_90;
        do {
          FUN_012f4b40(&local_88,piVar2);
        } while (local_7c == 2);
      } while (local_7c == 3);
      local_b0 = local_88;
      uStack_ac = uStack_84;
      uStack_a8 = uStack_80;
      iVar1 = local_7c;
      goto LAB_00df0dbc;
    }
LAB_00df0cac:
    piVar2 = param_2 + 0xb;
    param_2[6] = -0x7fffffff;
    if (*piVar2 == -0x7fffffff) {
LAB_00df0cf8:
      param_1[3] = 2;
      *piVar2 = -0x7fffffff;
      return;
    }
    do {
      FUN_012f4b40(&local_88,piVar2);
    } while (local_7c == 2);
    if (local_7c == 3) {
      if (-0x7fffffff < *piVar2) {
        FUN_019bb7e0(*piVar2,param_2[0xc]);
      }
      goto LAB_00df0cf8;
    }
  }
  else {
    do {
      FUN_012f4b40(&local_88,piVar2);
    } while (local_7c == 2);
    if (local_7c == 3) {
      if (-0x7fffffff < *piVar2) {
        FUN_019bb7e0(*piVar2,param_2[7]);
      }
      goto LAB_00df0c98;
    }
  }
  local_b0 = local_88;
  uStack_ac = uStack_84;
  uStack_a8 = uStack_80;
  iVar1 = local_7c;
LAB_00df0dbc:
  FUN_01bed4e2(auStack_100,auStack_78,0x50);
  *param_1 = local_b0;
  param_1[1] = uStack_ac;
  param_1[2] = uStack_a8;
  param_1[3] = iVar1;
  FUN_01bed4e2(param_1 + 4,auStack_100,0x50);
  return;
}

