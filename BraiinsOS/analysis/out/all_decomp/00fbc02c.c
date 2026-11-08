// FUN_00fbc02c @ 00fbc02c size=580 calls_out=5 calls_in=1
// strings: 

void FUN_00fbc02c(undefined4 param_1,int *param_2)

{
  undefined1 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  int *piVar7;
  undefined4 *local_6f4;
  int local_6e8;
  undefined4 *local_6e4;
  undefined4 local_6e0;
  int local_498;
  int local_494;
  int local_490;
  undefined4 local_248;
  int local_244;
  int local_240;
  int local_23c;
  undefined4 local_238;
  undefined4 local_234;
  undefined4 uStack_230;
  undefined4 uStack_22c;
  
  iVar3 = param_2[1];
  iVar5 = *param_2;
  piVar7 = (int *)((uint)&local_248 | 4);
  iVar2 = 4;
  local_6e0 = 0;
  local_6e4 = (undefined4 *)&DAT_00000004;
  local_6e8 = 0;
  if (iVar3 < 0) {
    local_490 = 0;
    local_494 = 4;
    local_498 = 0;
    iVar3 = -(iVar3 + (uint)(iVar5 != 0));
    iVar5 = -iVar5;
    do {
      iVar4 = iVar3;
      iVar3 = local_490;
      if (local_490 == local_498) {
        FUN_0127ac28(&local_498);
        iVar2 = local_494;
      }
      *(int *)(iVar2 + iVar3 * 4) = iVar5;
      local_490 = iVar3 + 1;
      iVar3 = 0;
      iVar5 = iVar4;
    } while (iVar4 != 0);
    *piVar7 = local_498;
    piVar7[1] = local_494;
    piVar7[2] = local_490;
    uVar1 = 0;
  }
  else {
    if (iVar5 == 0 && iVar3 == 0) {
      *piVar7 = 0;
      piVar7[1] = 4;
      piVar7[2] = 0;
      piVar7[3] = 1;
      goto LAB_00fbc160;
    }
    iVar2 = 4;
    local_490 = 0;
    local_494 = 4;
    local_498 = 0;
    do {
      iVar4 = iVar3;
      iVar3 = local_490;
      if (local_490 == local_498) {
        FUN_0127ac28(&local_498);
        iVar2 = local_494;
      }
      *(int *)(iVar2 + iVar3 * 4) = iVar5;
      local_490 = iVar3 + 1;
      iVar3 = 0;
      iVar5 = iVar4;
    } while (iVar4 != 0);
    *piVar7 = local_498;
    piVar7[1] = local_494;
    piVar7[2] = local_490;
    uVar1 = 2;
  }
  local_238 = CONCAT31(local_238._1_3_,uVar1);
LAB_00fbc160:
  uVar6 = 0;
  local_248 = 0x80000001;
  local_234 = 0;
  FUN_015afa08(&local_6e8);
  *local_6e4 = local_248;
  local_6e4[1] = local_244;
  local_6e4[2] = local_240;
  local_6e4[3] = local_23c;
  local_6e4[4] = local_238;
  local_6e4[5] = local_234;
  local_6e4[6] = uStack_230;
  local_6e4[7] = uStack_22c;
  iVar2 = 1;
  iVar3 = param_2[0xb];
  local_6e0 = 1;
  if (-1 < iVar3) {
    local_6f4 = local_6e4;
    iVar5 = param_2[10];
    local_244 = 0;
    if ((iVar3 == 0) || (iVar2 = thunk_FUN_016d4a50(iVar3), local_244 = iVar3, iVar2 != 0)) {
      FUN_016dd1aa(iVar2,iVar5,iVar3);
      local_238 = 0;
      local_248 = 0x80000003;
      local_240 = iVar2;
      local_23c = iVar3;
      if (local_6e8 == 1) {
        FUN_015afa08(&local_6e8);
        local_6f4 = local_6e4;
      }
      local_6f4[8] = local_248;
      local_6f4[9] = local_244;
      local_6f4[10] = local_240;
      local_6f4[0xb] = local_23c;
      local_6f4[0xc] = local_238;
      local_6f4[0xd] = local_234;
      local_6f4[0xe] = uStack_230;
      local_6f4[0xf] = uStack_22c;
      local_6e0 = 2;
                    /* WARNING: Could not recover jumptable at 0x00fbc268. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)(&DAT_00fbc26c + *(int *)(&DAT_00fbc26c + param_2[2] * 4)))
                (*(int *)(&DAT_00fbc26c + param_2[2] * 4),param_2 + 3);
      return;
    }
    uVar6 = 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00600af4(uVar6,iVar3);
}

