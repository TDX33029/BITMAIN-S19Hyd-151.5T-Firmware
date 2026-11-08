// FUN_009c9b04 @ 009c9b04 size=460 calls_out=6 calls_in=4
// strings:  Byte 255 is treated as an extension point; it should not be encoding anything. Do you have a mismatched bincode version or configuration? 

void FUN_009c9b04(undefined4 *param_1,int *param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  uint uVar4;
  undefined4 uVar5;
  uint *puVar6;
  undefined4 uVar7;
  undefined4 local_28;
  undefined4 *local_24;
  undefined4 local_20;
  
  FUN_0094f574(&local_28);
  if ((char)local_28 == '\x01') {
    puVar3 = local_24;
  }
  else {
    uVar4 = (uint)local_28._1_1_;
    if (uVar4 < 0xfb) {
      param_1[2] = uVar4;
LAB_009c9b50:
      param_1[3] = 0;
LAB_009c9b54:
      uVar1 = 0;
      param_1[4] = 0;
      param_1[5] = 0;
      goto LAB_009c9b5c;
    }
    switch(uVar4) {
    case 0xfb:
      if (1 < (uint)param_2[1]) {
        iVar2 = param_2[1] - 2;
        puVar6 = (uint *)((ushort *)*param_2 + 1);
        uVar4 = (uint)*(ushort *)*param_2;
LAB_009c9cb8:
        *param_2 = (int)puVar6;
        param_2[1] = iVar2;
        param_1[2] = uVar4;
        goto LAB_009c9b50;
      }
      break;
    case 0xfc:
      if (3 < (uint)param_2[1]) {
        iVar2 = param_2[1] - 4;
        puVar6 = (uint *)*param_2 + 1;
        uVar4 = *(uint *)*param_2;
        goto LAB_009c9cb8;
      }
      break;
    case 0xfd:
      if (7 < (uint)param_2[1]) {
        puVar3 = (undefined4 *)*param_2;
        uVar1 = *puVar3;
        uVar5 = puVar3[1];
        *param_2 = (int)(puVar3 + 2);
        param_2[1] = param_2[1] - 8;
        param_1[2] = uVar1;
        param_1[3] = uVar5;
        goto LAB_009c9b54;
      }
      break;
    case 0xfe:
      if (0xf < (uint)param_2[1]) {
        puVar3 = (undefined4 *)*param_2;
        *param_2 = (int)(puVar3 + 4);
        param_2[1] = param_2[1] - 0x10;
        uVar1 = puVar3[1];
        uVar7 = puVar3[2];
        uVar5 = puVar3[3];
        param_1[2] = *puVar3;
        param_1[3] = uVar1;
        param_1[4] = uVar7;
        uVar1 = 0;
        param_1[5] = uVar5;
        goto LAB_009c9b5c;
      }
      break;
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
      *puVar3 = local_28;
      puVar3[1] = local_24;
      puVar3[2] = local_20;
      goto LAB_009c9b30;
    }
    local_20 = 0;
    local_24 = (undefined4 *)0x2501;
    local_28 = 0x80000000;
    puVar3 = (undefined4 *)FUN_0073696c(&local_28);
  }
LAB_009c9b30:
  param_1[1] = puVar3;
  uVar1 = 1;
LAB_009c9b5c:
  *param_1 = uVar1;
  return;
}

