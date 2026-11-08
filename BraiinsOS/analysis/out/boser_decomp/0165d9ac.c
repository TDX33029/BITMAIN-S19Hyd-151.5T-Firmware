// FUN_0165d9ac @ 0165d9ac size=256 calls_out=3 calls_in=2
// strings: 

void FUN_0165d9ac(undefined4 *param_1,int *param_2,undefined4 param_3,undefined4 param_4,
                 code *param_5)

{
  uint uVar1;
  int iVar2;
  undefined1 *unaff_r4;
  undefined4 uVar3;
  undefined8 uVar4;
  int local_30;
  uint local_2c;
  uint local_28;
  undefined4 local_24;
  
  if (*param_2 == 1) {
    unaff_r4 = (undefined1 *)param_2[1];
    uVar3 = 1;
    if (unaff_r4 < (undefined1 *)0x3e9) {
      unaff_r4 = (undefined1 *)0x3e8;
    }
    if (&DAT_3b9ac9fe < unaff_r4) {
      unaff_r4 = &DAT_3b9ac9ff;
    }
  }
  else {
    uVar3 = 0;
  }
  iVar2 = param_2[2];
  if (iVar2 == 0) {
    FUN_016623e0(&local_30,0x10);
    (*param_5)(param_1,param_3,param_4,local_2c,local_28,uVar3,unaff_r4);
    FUN_0134bd64(local_30,local_2c);
  }
  else {
    uVar1 = param_2[3];
    uVar4 = CONCAT44(uVar1,iVar2);
    if (0x10 < uVar1) {
      local_24 = 0;
      local_30 = iVar2;
      local_2c = uVar1;
      local_28 = uVar1;
      uVar4 = FUN_0165f33c(&local_30,0x10);
      if ((int)uVar4 == 0) {
        *param_1 = 1;
        param_1[1] = 0x80000003;
        return;
      }
    }
    (*param_5)(param_1,param_3,param_4,(int)uVar4,(int)((ulonglong)uVar4 >> 0x20),uVar3,unaff_r4);
  }
  return;
}

