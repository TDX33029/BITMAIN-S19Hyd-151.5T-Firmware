// FUN_0123bbe0 @ 0123bbe0 size=420 calls_out=6 calls_in=1
// strings: 

void FUN_0123bbe0(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  double in_d0;
  undefined4 extraout_s1;
  undefined4 extraout_s1_00;
  double dVar4;
  undefined1 local_60 [8];
  int local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  int local_48;
  undefined4 local_44;
  undefined4 local_40;
  
  if (NAN(in_d0)) {
    *param_1 = 0x80000001;
    return;
  }
  if (SUB84(in_d0,0) == 0 && ((uint)((ulonglong)in_d0 >> 0x20) & 0x7fffffff) == 0x7ff00000) {
    *param_1 = 0x80000000;
    *(byte *)(param_1 + 1) = (byte)((ulonglong)in_d0 >> 0x3f);
    return;
  }
  iVar2 = 0;
  dVar4 = in_d0;
  do {
    uVar3 = FUN_016d54e0(SUB84(dVar4,0));
    if (ABS((double)CONCAT44(extraout_s1,uVar3) - dVar4) < 2.220446049250313e-16) {
      if (dVar4 < 0.0) {
        dVar4 = -dVar4;
      }
      FUN_0123bda8(SUB84(dVar4,0),&local_48);
      iVar1 = local_48;
      if (local_48 != -0x80000000) {
        FUN_01845e08(0,iVar2);
        uVar3 = local_44;
        FUN_0123bda8(&local_48);
        if (local_48 != -0x80000000) {
          local_58 = local_48;
          uStack_54 = local_44;
          uStack_50 = local_40;
          FUN_0123d084(param_1,&local_48,&local_58);
          *(bool *)(param_1 + 6) = in_d0 < 0.0;
          return;
        }
        FUN_0123bfcc(param_1,local_60);
        if (iVar1 == 0) {
          return;
        }
        thunk_FUN_016d3fb4(uVar3);
        return;
      }
      break;
    }
    iVar2 = iVar2 + 1;
    uVar3 = FUN_01845e08(0,iVar2);
    dVar4 = in_d0 * (double)CONCAT44(extraout_s1_00,uVar3);
  } while (SUB84(dVar4,0) != 0 || ((uint)((ulonglong)dVar4 >> 0x20) & 0x7fffffff) != 0x7ff00000);
  FUN_0123bfcc(param_1,local_60);
  return;
}

