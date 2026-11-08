// FUN_016eccb8 @ 016eccb8 size=224 calls_out=4 calls_in=1
// strings: 

void FUN_016eccb8(undefined4 param_1,undefined *param_2)

{
  int iVar1;
  undefined1 *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined4 uVar5;
  undefined1 auStack_1020 [4096];
  
  puVar4 = &UNK_003d0900;
  if (param_2 < &UNK_003d0900) {
    puVar4 = param_2;
  }
  if (puVar4 <= param_2 + -((uint)param_2 >> 1)) {
    puVar4 = param_2 + -((uint)param_2 >> 1);
  }
  if (puVar4 < (undefined *)0x801) {
    puVar2 = auStack_1020;
    puVar3 = (undefined *)0x800;
  }
  else {
    iVar1 = (int)puVar4 * 2;
    uVar5 = 0;
    if ((int)((uint)puVar4 | (int)puVar4 << 1) < 0) {
LAB_016ecd00:
                    /* WARNING: Subroutine does not return */
      FUN_00664620(uVar5,iVar1);
    }
    if (iVar1 == 0) {
      puVar2 = &DAT_00000001;
      puVar3 = (undefined *)0x0;
    }
    else {
      uVar5 = 1;
      puVar2 = (undefined1 *)FUN_01298504(iVar1,1);
      puVar3 = puVar4;
      if (puVar2 == (undefined1 *)0x0) goto LAB_016ecd00;
    }
  }
  FUN_016ecdc0(param_1,param_2,puVar2,puVar3,param_2 < (undefined *)0x41);
  if ((undefined *)0x800 < puVar4) {
    FUN_0134aee0(puVar3,puVar2,1,2);
  }
  return;
}

