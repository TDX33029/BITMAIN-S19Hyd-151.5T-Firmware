// FUN_0173ee3c @ 0173ee3c size=944 calls_out=12 calls_in=3
// strings: /aws-lc/crypto/fipsmodule/evp/digestsign.c | /aws-lc/crypto/fipsmodule/evp/digestsign.c | /aws-lc/crypto/fipsmodule/evp/digestsign.c | /aws-lc/crypto/fipsmodule/evp/digestsign.c

ulonglong FUN_0173ee3c(undefined4 *param_1,int param_2,uint *param_3,int param_4,undefined4 param_5)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  undefined4 *puVar5;
  uint uVar6;
  code *UNRECOVERED_JUMPTABLE;
  ulonglong uVar7;
  uint local_78;
  undefined1 auStack_74 [12];
  int local_68;
  undefined1 auStack_5c [28];
  undefined4 *local_40;
  undefined4 local_28;
  int local_1c;
  
  piVar4 = (int *)param_1[3];
  local_40 = param_1;
  if (piVar4 == (int *)0x0) {
    local_28 = 0xdf;
    FUN_016e9cd0(0xe,0,0x43,"/aws-lc/crypto/fipsmodule/evp/digestsign.c");
    return 0;
  }
  if (((((*(int *)(piVar4[2] + 4) == 0x3e1) &&
        (puVar5 = *(undefined4 **)(piVar4[2] + 8), puVar5 != (undefined4 *)0x0)) &&
       (*(int *)*puVar5 - 0x3e2U < 3)) || (*(int *)(*piVar4 + 0x18) == 0)) &&
     (local_1c = param_4, iVar2 = FUN_0173cab0(param_1), param_4 = local_1c, iVar2 == 0)) {
    UNRECOVERED_JUMPTABLE = *(code **)(*(int *)param_1[3] + 0x1c);
    if (UNRECOVERED_JUMPTABLE == (code *)0x0) {
      local_28 = 0xf2;
      FUN_016e9cd0(6,0,0x7d,"/aws-lc/crypto/fipsmodule/evp/digestsign.c");
      return 0;
    }
                    /* WARNING: Could not recover jumptable at 0x0173ef54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar7 = (*UNRECOVERED_JUMPTABLE)((int *)param_1[3],param_2,param_3);
    return uVar7;
  }
  if ((param_2 != 0) && (iVar2 = FUN_0173cae4(param_1,param_4,param_5), iVar2 == 0)) {
    return 0;
  }
  local_1c = DAT_018ddaf8;
  iVar2 = ((int *)param_1[3])[2];
  if (((((*(int *)(iVar2 + 4) == 0x3e1) &&
        (puVar5 = *(undefined4 **)(iVar2 + 8), puVar5 != (undefined4 *)0x0)) &&
       (*(int *)*puVar5 - 0x3e2U < 3)) || (*(int *)(*(int *)param_1[3] + 0x18) == 0)) &&
     (iVar2 = FUN_0173cab0(param_1), iVar2 == 0)) {
    FUN_016e9cd0(6,0,0x7d,"/aws-lc/crypto/fipsmodule/evp/digestsign.c",0x96);
    uVar3 = 0;
    goto LAB_0173ec78;
  }
  if (param_2 == 0) {
    iVar2 = FUN_0173cab0(param_1);
    if (iVar2 == 0) {
      uVar1 = FUN_0172a898(*param_1);
      uVar3 = FUN_0173b6c4(param_1[3],0,param_3,0,uVar1);
    }
    else {
      uVar6 = FUN_0172b138(param_1);
      uVar3 = 1;
      *param_3 = uVar6;
    }
    goto LAB_0173ec78;
  }
  FUN_0172aab0(auStack_74);
  iVar2 = FUN_0172ad04(auStack_74,param_1);
  if (iVar2 == 0) {
LAB_0173ec64:
    uVar3 = 0;
  }
  else {
    iVar2 = FUN_0173cab0(param_1);
    if (iVar2 != 0) {
      uVar6 = *param_3;
      uVar3 = FUN_0172b138(auStack_74);
      if (uVar6 < uVar3) {
        FUN_016e9cd0(6,0,100,"/aws-lc/crypto/fipsmodule/evp/digestsign.c",0x32);
      }
      else {
        iVar2 = FUN_0173e9d4(*(int *)(local_68 + 0x14) + 8,param_2,&local_78);
        if (iVar2 != 0) {
          uVar3 = 1;
          *param_3 = local_78;
          goto LAB_0173ec68;
        }
      }
      goto LAB_0173ec64;
    }
    iVar2 = FUN_0172afb8(auStack_74,auStack_5c,&local_78);
    if (iVar2 == 0) goto LAB_0173ec64;
    iVar2 = FUN_0173b6c4(param_1[3],param_2,param_3,auStack_5c,local_78);
    uVar3 = (uint)(iVar2 != 0);
  }
LAB_0173ec68:
  FUN_0172aae8(auStack_74);
LAB_0173ec78:
  if (local_1c != DAT_018ddaf8) {
                    /* WARNING: Subroutine does not return */
    FUN_016d2b78();
  }
  return (ulonglong)uVar3;
}

