// FUN_012bd3f8 @ 012bd3f8 size=364 calls_out=7 calls_in=2
// strings: 

undefined4 FUN_012bd3f8(undefined4 param_1,undefined4 param_2,int *param_3,int *param_4)

{
  bool bVar1;
  undefined4 uVar2;
  int *piVar3;
  int unaff_r7;
  undefined1 uVar4;
  int unaff_r10;
  undefined1 local_60 [4];
  undefined4 local_5c;
  int iStack_58;
  int iStack_54;
  undefined1 local_4c;
  undefined1 local_48;
  int local_44;
  int *local_40;
  int local_3c;
  undefined1 auStack_38 [20];
  
  uVar2 = FUN_012bc650(8);
  FUN_012bc780(uVar2,param_1);
  if (param_3[2] == 0) {
    uVar4 = 0;
    bVar1 = true;
    piVar3 = param_3;
  }
  else {
    if (param_3[2] == 1) {
      param_3[2] = 0;
      unaff_r10 = *(int *)param_3[1];
      if (unaff_r10 == -0x80000000) {
                    /* WARNING: Subroutine does not return */
        FUN_012fb0cc(&DAT_01ce2744);
      }
      uVar4 = 2;
      bVar1 = true;
      piVar3 = (int *)param_3[1];
    }
    else {
      unaff_r10 = *param_3;
      bVar1 = false;
      uVar4 = 3;
      piVar3 = param_3;
    }
    unaff_r7 = piVar3[2];
    piVar3 = (int *)piVar3[1];
  }
  FUN_01bed4e2((uint)auStack_38 | 3,param_2,0xc);
  local_60[0] = 1;
  local_5c = CONCAT31(local_5c._1_3_,2);
  FUN_01bed4e2((int)&local_5c + 1,auStack_38,0xf);
  local_4c = 2;
  local_48 = uVar4;
  local_44 = unaff_r10;
  local_40 = piVar3;
  local_3c = unaff_r7;
  FUN_012bcd1c(uVar2,local_60);
  if (*param_4 != -0x80000000) {
    local_5c = *param_4;
    iStack_58 = param_4[1];
    iStack_54 = param_4[2];
    local_60[0] = 4;
    FUN_012bca08(uVar2,0xf,local_60);
  }
  if (bVar1) {
    FUN_006a41c0(param_3);
  }
  return uVar2;
}

