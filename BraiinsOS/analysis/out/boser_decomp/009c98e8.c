// FUN_009c98e8 @ 009c98e8 size=464 calls_out=6 calls_in=31
// strings: Invalid value (u128 range): you may have a version or configuration disagreement? |  Byte 255 is treated as an extension point; it should not be encoding anything. Do you have a mismatched bincode version or configuration? 

void FUN_009c98e8(undefined4 *param_1,int *param_2)

{
  uint uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  uint *puVar5;
  undefined4 local_28;
  undefined4 *local_24;
  undefined4 local_20;
  
  FUN_0094f574(&local_28);
  if ((char)local_28 == '\x01') {
    puVar3 = local_24;
    goto LAB_009c9914;
  }
  uVar1 = (uint)local_28._1_1_;
  if (uVar1 < 0xfb) {
    uVar4 = 0;
    param_1[2] = uVar1;
    param_1[3] = 0;
    goto LAB_009c9934;
  }
  switch(uVar1) {
  case 0xfb:
    if (1 < (uint)param_2[1]) {
      iVar2 = param_2[1] - 2;
      puVar5 = (uint *)((ushort *)*param_2 + 1);
      uVar1 = (uint)*(ushort *)*param_2;
LAB_009c9a98:
      uVar4 = 0;
      param_1[2] = uVar1;
      *param_2 = (int)puVar5;
      param_2[1] = iVar2;
      param_1[3] = 0;
      goto LAB_009c9934;
    }
    break;
  case 0xfc:
    if (3 < (uint)param_2[1]) {
      iVar2 = param_2[1] - 4;
      puVar5 = (uint *)*param_2 + 1;
      uVar1 = *(uint *)*param_2;
      goto LAB_009c9a98;
    }
    break;
  case 0xfd:
    if (7 < (uint)param_2[1]) {
      puVar3 = (undefined4 *)*param_2;
      *param_2 = (int)(puVar3 + 2);
      param_2[1] = param_2[1] - 8;
      uVar4 = puVar3[1];
      param_1[2] = *puVar3;
      param_1[3] = uVar4;
      uVar4 = 0;
      goto LAB_009c9934;
    }
    break;
  case 0xfe:
    iVar2 = thunk_FUN_01be5118(0x51);
    if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00664620(1,0x51);
    }
    FUN_01bed4e2(iVar2,
                 "Invalid value (u128 range): you may have a version or configuration disagreement?"
                 ,0x51);
    local_20 = 0x51;
    local_28 = 0x51;
    local_24 = (undefined4 *)iVar2;
    puVar3 = (undefined4 *)thunk_FUN_01be5118(0xc);
    if (puVar3 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0066439c(4,0xc);
    }
    goto LAB_009c9a78;
  default:
    iVar2 = thunk_FUN_01be5118(0x8b);
    if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00664620(1,0x8b);
    }
    FUN_01bed4e2(iVar2,
                 "\nByte 255 is treated as an extension point; it should not be encoding anything.\nDo you have a mismatched bincode version or configuration?\n"
                 ,0x8b);
    local_20 = 0x8b;
    local_28 = 0x8b;
    local_24 = (undefined4 *)iVar2;
    puVar3 = (undefined4 *)thunk_FUN_01be5118(0xc);
    if (puVar3 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0066439c(4,0xc);
    }
LAB_009c9a78:
    *puVar3 = local_28;
    puVar3[1] = local_24;
    puVar3[2] = local_20;
    goto LAB_009c9914;
  }
  local_20 = 0;
  local_24 = (undefined4 *)0x2501;
  local_28 = 0x80000000;
  puVar3 = (undefined4 *)FUN_0073696c(&local_28);
LAB_009c9914:
  param_1[1] = puVar3;
  uVar4 = 1;
LAB_009c9934:
  *param_1 = uVar4;
  return;
}

