// FUN_01581790 @ 01581790 size=668 calls_out=8 calls_in=1
// strings: 

void FUN_01581790(int *param_1)

{
  undefined1 *puVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  double in_d0;
  undefined4 extraout_s1;
  undefined4 extraout_s1_00;
  double dVar5;
  undefined1 local_80 [8];
  undefined1 *local_78;
  int local_74;
  int local_70;
  undefined1 *local_68;
  code *local_64;
  int iStack_60;
  undefined1 *local_5c;
  int iStack_58;
  int iStack_54;
  int iStack_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  
  if (NAN(in_d0)) {
    *param_1 = -0x7fffffff;
  }
  else if (SUB84(in_d0,0) == 0 && ((uint)((ulonglong)in_d0 >> 0x20) & 0x7fffffff) == 0x7ff00000) {
    *param_1 = -0x80000000;
    *(byte *)(param_1 + 1) = (byte)((ulonglong)in_d0 >> 0x3f);
  }
  else {
    iVar3 = 0;
    dVar5 = in_d0;
    do {
      uVar4 = FUN_01be5b40(SUB84(dVar5,0));
      if (ABS((double)CONCAT44(extraout_s1,uVar4) - dVar5) < 2.220446049250313e-16) {
        if (dVar5 < 0.0) {
          dVar5 = -dVar5;
        }
        FUN_01581aa8(SUB84(dVar5,0),&local_78);
        puVar1 = local_78;
        if (local_78 != (undefined1 *)0x80000000) {
          FUN_01bf0d58(0,iVar3);
          iVar2 = local_70;
          iVar3 = local_74;
          FUN_01581aa8(&local_78);
          if (local_78 != (undefined1 *)0x80000000) {
            local_5c = local_78;
            iStack_58 = local_74;
            iStack_54 = local_70;
            local_68 = puVar1;
            local_64 = (code *)iVar3;
            iStack_60 = iVar2;
            FUN_0157b7fc(&local_68);
            *param_1 = (int)local_68;
            param_1[1] = (int)local_64;
            param_1[2] = iStack_60;
            param_1[3] = (int)local_5c;
            param_1[4] = iStack_58;
            param_1[5] = iStack_54;
            *(bool *)(param_1 + 6) = in_d0 < 0.0;
            return;
          }
          local_64 = FUN_013025ec;
          local_68 = local_80;
          FUN_00664898(&local_4c,&DAT_004a68d7,&local_68);
          FUN_0157ad7c(&local_68,local_48,local_44);
          if (local_68 == (undefined1 *)0x80000002) {
            *param_1 = -0x7fffffff;
          }
          else {
            *param_1 = (int)local_68;
            param_1[1] = (int)local_64;
            param_1[2] = iStack_60;
            param_1[3] = (int)local_5c;
            param_1[4] = iStack_58;
            param_1[5] = iStack_54;
            param_1[6] = iStack_50;
          }
          FUN_019bb7e0(local_4c,local_48);
          FUN_0134aee0(puVar1,iVar3,4,4);
          return;
        }
        local_64 = FUN_013025ec;
        local_68 = local_80;
        FUN_00664898(&local_4c,&DAT_004a68d7,&local_68);
        FUN_0157ad7c(&local_68,local_48,local_44);
        goto LAB_015818e4;
      }
      iVar3 = iVar3 + 1;
      uVar4 = FUN_01bf0d58(0,iVar3);
      dVar5 = in_d0 * (double)CONCAT44(extraout_s1_00,uVar4);
    } while (SUB84(dVar5,0) != 0 || ((uint)((ulonglong)dVar5 >> 0x20) & 0x7fffffff) != 0x7ff00000);
    local_64 = FUN_013025ec;
    local_68 = local_80;
    FUN_00664898(&local_4c,&DAT_004a68d7,&local_68);
    FUN_0157ad7c(&local_68,local_48,local_44);
LAB_015818e4:
    if (local_68 == (undefined1 *)0x80000002) {
      *param_1 = -0x7fffffff;
    }
    else {
      *param_1 = (int)local_68;
      param_1[1] = (int)local_64;
      param_1[2] = iStack_60;
      param_1[3] = (int)local_5c;
      param_1[4] = iStack_58;
      param_1[5] = iStack_54;
      param_1[6] = iStack_50;
    }
    FUN_019bb7e0(local_4c,local_48);
  }
  return;
}

