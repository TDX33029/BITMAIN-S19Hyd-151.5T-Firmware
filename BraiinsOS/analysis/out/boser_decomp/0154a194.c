// FUN_0154a194 @ 0154a194 size=244 calls_out=4 calls_in=1
// strings: 

void FUN_0154a194(undefined4 param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  undefined1 *puVar4;
  uint uVar5;
  undefined4 uVar6;
  undefined1 auStack_102c [4096];
  uint local_2c;
  undefined1 *puStack_28;
  undefined4 local_24;
  
  uVar3 = param_2 - (param_2 >> 1);
  uVar5 = 0xa2c2a;
  if (param_2 < 0xa2c2a) {
    uVar5 = param_2;
  }
  if (uVar5 <= uVar3) {
    uVar5 = uVar3;
  }
  uVar2 = uVar5 >> 1;
  if (uVar2 < 0xab) {
    puVar4 = auStack_102c;
    uVar5 = 0x155;
  }
  else {
    uVar6 = 0;
    iVar1 = uVar5 * 0xc;
    if (0xaaaaaaa < uVar3) {
LAB_0154a1ec:
                    /* WARNING: Subroutine does not return */
      FUN_00664620(uVar6,iVar1);
    }
    if (iVar1 == 0) {
      puVar4 = &SUB_00000004;
      uVar5 = 0;
    }
    else {
      uVar6 = 4;
      puVar4 = (undefined1 *)FUN_01298504(iVar1,4);
      if (puVar4 == (undefined1 *)0x0) goto LAB_0154a1ec;
    }
    local_24 = 0;
    local_2c = uVar5;
    puStack_28 = puVar4;
  }
  FUN_0154a2a4(param_1,param_2,puVar4,uVar5,param_2 < 0x41);
  if (0xaa < uVar2) {
    FUN_006a41c0(&local_2c);
  }
  return;
}

