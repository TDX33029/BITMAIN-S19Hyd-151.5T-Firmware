// FUN_00d66d04 @ 00d66d04 size=284 calls_out=5 calls_in=1
// strings: Power

void FUN_00d66d04(undefined1 *param_1,char *param_2)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  undefined4 unaff_r9;
  undefined1 unaff_r10;
  undefined1 auStack_40 [32];
  
  iVar5 = *(int *)(param_2 + 0x20);
  iVar6 = *(int *)(param_2 + 0x18);
  uVar4 = *(undefined4 *)(param_2 + 0x1c);
  if (iVar5 == 8) {
    iVar3 = thunk_FUN_016dd50a(uVar4,&DAT_00569eb0,8);
    if (iVar3 == 0) {
      unaff_r10 = 0;
joined_r0x00d66d88:
      bVar2 = false;
      goto joined_r0x00d66e18;
    }
  }
  else if ((iVar5 == 5) && (iVar3 = thunk_FUN_016dd50a(uVar4,"Power",5), iVar3 == 0)) {
    unaff_r10 = 1;
    goto joined_r0x00d66d88;
  }
  unaff_r9 = FUN_00c498dc(uVar4,iVar5,&DAT_01871f90,2);
  bVar2 = true;
joined_r0x00d66e18:
  if (iVar6 != 0) {
    thunk_FUN_016d3fb4(uVar4);
  }
  if (bVar2) {
    cVar1 = *param_2;
    *param_1 = 2;
    *(undefined4 *)(param_1 + 4) = unaff_r9;
    if (cVar1 != '\x06') {
      FUN_00d4fc54(param_2);
      return;
    }
  }
  else {
    FUN_016dd1aa((uint)auStack_40 | 7,param_2,0x18);
    *param_1 = unaff_r10;
    FUN_016dd1aa(param_1 + 1,auStack_40,0x1f);
  }
  return;
}

