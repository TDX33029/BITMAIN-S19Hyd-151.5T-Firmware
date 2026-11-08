// FUN_0132201c @ 0132201c size=756 calls_out=11 calls_in=0
// strings: must not be called with Writer or Vec

void FUN_0132201c(undefined4 *param_1,int param_2)

{
  code *pcVar1;
  int iVar2;
  undefined1 *puVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined4 uVar6;
  int iVar7;
  undefined4 ***pppuVar8;
  undefined4 ***pppuVar9;
  undefined4 ****local_60;
  undefined4 local_5c;
  undefined1 *local_4c;
  undefined4 ***local_48;
  undefined4 ***local_44;
  uint ***local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 ***local_30;
  uint local_2c;
  
  if ((*(char *)(param_2 + 0xc) != '\x01') || (*(char *)(param_2 + 0x18) == '\x02')) {
    local_30 = (undefined4 ***)&DAT_018d8924;
    DataMemoryBarrier(0xb);
    if (DAT_018d8924 != 0) {
      local_40 = (uint ***)&local_30;
      local_60 = &local_40;
      FUN_015eedc4(&DAT_018d8924,0,&local_60,&DAT_0188f028,&DAT_0188e9dc);
    }
    uVar4 = 0;
    iVar7 = *(int *)(DAT_018d8928 + 0x68);
    uVar6 = 1;
    if (*(char *)(iVar7 + 0xc) == '\x01') {
      uVar6 = *(undefined4 *)(iVar7 + 4);
      uVar4 = *(undefined4 *)(iVar7 + 8);
    }
    *param_1 = 1;
    param_1[1] = 3;
    param_1[2] = uVar6;
    param_1[3] = uVar4;
    return;
  }
  uVar5 = *(uint *)(param_2 + 8);
  iVar7 = 1;
  if (0x7f < uVar5) {
    iVar7 = 2;
    if (0x3fff < uVar5) {
      iVar7 = 3;
    }
    if ((0x1fffff < uVar5) && (iVar7 = 5, uVar5 < 0x10000000)) {
      iVar7 = 4;
    }
  }
  iVar2 = FUN_01337c54(*(undefined4 *)(param_2 + 0x10));
  pppuVar8 = (undefined4 ***)(uVar5 + iVar7 + iVar2 + 3);
  *(undefined4 ****)(param_2 + 0x14) = pppuVar8;
  if ((int)pppuVar8 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(0,pppuVar8);
  }
  if (pppuVar8 == (undefined4 ***)0x0) {
    puVar3 = &DAT_00000001;
    pppuVar9 = (undefined4 ***)0x0;
  }
  else {
    puVar3 = (undefined1 *)thunk_FUN_016d4a50(pppuVar8);
    pppuVar9 = pppuVar8;
    if (puVar3 == (undefined1 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(1,pppuVar8);
    }
  }
  local_44 = (undefined4 ***)0x0;
  local_60 = (undefined4 ****)0x80000001;
  local_4c = puVar3;
  local_48 = pppuVar8;
  if (*(char *)(param_2 + 0xc) == '\x01') {
    uVar4 = *(undefined4 *)(param_2 + 4);
    uVar6 = *(undefined4 *)(param_2 + 8);
    if (pppuVar8 < (undefined4 ***)0x5) {
      local_30 = (undefined4 ***)0xa;
      local_2c = local_2c & 0xffffff00;
      FUN_01328914(&local_40,&local_60,&local_30,1);
      if (local_40 != (undefined4 ***)0x4) goto LAB_01322254;
    }
    else {
      *puVar3 = 10;
      local_44 = (undefined4 ***)0x1;
    }
    FUN_01328ef8(&local_40,&local_60,uVar6);
    if ((local_40 != (undefined4 ***)0x4) ||
       (FUN_01328914(&local_40,&local_60,uVar4,uVar6), local_40 != (undefined4 ***)0x4))
    goto LAB_01322254;
  }
  if (((*(byte *)(param_2 + 0x18) == 2) ||
      (FUN_01329168(&local_40,&local_60,2,*(byte *)(param_2 + 0x18) & 1),
      local_40 == (undefined4 ***)0x4)) &&
     (FUN_01328b10(&local_40,&local_60,*(undefined4 *)(param_2 + 0x10)),
     local_40 == (undefined4 ***)0x4)) {
    if (local_60 < (uint ***)0x80000001) {
                    /* WARNING: Subroutine does not return */
      FUN_015be724("must not be called with Writer or Vec",0x25,&DAT_0188fac0);
    }
    local_2c = 0;
    local_30 = local_48;
    local_3c = 0;
    local_40 = local_44;
    if (local_48 != local_44) {
      FUN_00faf26c(&local_30,&local_40,&DAT_0188fad0);
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xfdee,0x1322310);
      (*pcVar1)();
    }
    *param_1 = 0;
    param_1[1] = pppuVar9;
    param_1[2] = puVar3;
    param_1[3] = pppuVar8;
    return;
  }
LAB_01322254:
  *param_1 = 1;
  param_1[1] = local_40;
  param_1[2] = local_3c;
  param_1[3] = local_38;
  if (0 < (int)local_60) {
    thunk_FUN_016d3fb4(local_5c);
  }
  if (pppuVar9 == (undefined4 ***)0x0) {
    return;
  }
  thunk_FUN_016d3fb4(puVar3);
  return;
}

