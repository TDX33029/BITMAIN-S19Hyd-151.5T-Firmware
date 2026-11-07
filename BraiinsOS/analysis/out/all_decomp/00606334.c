// FUN_00606334 @ 00606334 size=492 calls_out=15 calls_in=1
// strings: non-null AWS-LC EVP_PKEY pointerBUG: Multiconfiguration is empty

void FUN_00606334(undefined4 *param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int *piVar5;
  int local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 local_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  int local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 local_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  int local_2c;
  int local_28;
  
  iVar1 = FUN_0173a6d0(param_2);
  if (iVar1 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00fb74f8(&DAT_00418ec6,0x2b,&local_68,&DAT_01857708);
  }
  FUN_016e0ec4(&local_68,iVar1 + 7U >> 2 | 1);
  iVar1 = FUN_0173acc0(param_2);
  if (((iVar1 != 0) && (iVar2 = FUN_0172ca8c(), iVar2 != 0)) &&
     (iVar1 = FUN_0172cabc(iVar1), iVar1 != 0)) {
    iVar1 = FUN_016e956c(&local_68,iVar2,iVar1,4);
    if (iVar1 == 1) {
      local_48 = local_68;
      uStack_44 = uStack_64;
      uStack_40 = uStack_60;
      local_3c = local_5c;
      uStack_38 = uStack_58;
      uStack_34 = uStack_54;
      uStack_30 = uStack_50;
      local_2c = 0;
      local_28 = 0;
      iVar3 = FUN_016e1360(&local_48,&local_2c,&local_28);
      iVar2 = local_28;
      iVar1 = local_2c;
      if ((iVar3 == 1) && (local_2c != 0)) {
        uVar4 = 0;
        if (local_28 < 0) {
LAB_00606418:
                    /* WARNING: Subroutine does not return */
          FUN_00600af4(uVar4,iVar2);
        }
        if (local_28 == 0) {
          iVar3 = 1;
        }
        else {
          iVar3 = thunk_FUN_016d4a50(local_28);
          if (iVar3 == 0) {
            uVar4 = 1;
            goto LAB_00606418;
          }
        }
        FUN_016dd1aa(iVar3,iVar1,iVar2);
        FUN_0177aafc(iVar1);
        FUN_016e0fd8(&local_48);
        local_48 = FUN_01739fe0(param_2);
        if (local_48 != 1) {
                    /* WARNING: Subroutine does not return */
          FUN_015f3600(&DAT_00568c80,&local_48,&DAT_0033d89f,&DAT_01857738);
        }
        if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00fb74f8("non-null AWS-LC EVP_PKEY pointerBUG: Multiconfiguration is empty",0x20,
                       &local_68,&DAT_01857718);
        }
        *param_1 = param_3;
        param_1[1] = iVar3;
        param_1[2] = iVar2;
        param_1[3] = param_2;
        return;
      }
      piVar5 = &local_48;
      goto LAB_00606428;
    }
  }
  piVar5 = &local_68;
LAB_00606428:
  FUN_016e0fd8(piVar5);
  *param_1 = 0;
  return;
}

