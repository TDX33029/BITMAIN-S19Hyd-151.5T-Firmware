// FUN_0154f6ec @ 0154f6ec size=236 calls_out=7 calls_in=1
// strings: 

void FUN_0154f6ec(undefined4 *param_1)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  undefined1 *puVar3;
  undefined4 uVar4;
  int iVar5;
  
  puVar1 = (undefined1 *)*param_1;
  puVar3 = (undefined1 *)0x22;
  if (&DAT_80000009 < puVar1) {
    puVar3 = puVar1 + 0x7ffffff6;
  }
  switch(puVar3) {
  case (undefined1 *)0x0:
  case (undefined1 *)0x5:
  case (undefined1 *)0xc:
  case (undefined1 *)0xf:
  case (undefined1 *)0x11:
  case (undefined1 *)0x12:
  case (undefined1 *)0x13:
  case (undefined1 *)0x15:
  case (undefined1 *)0x16:
  case (undefined1 *)0x17:
  case (undefined1 *)0x1e:
  case (undefined1 *)0x21:
    return;
  case (undefined1 *)0x1:
  case (undefined1 *)0x1f:
  case (undefined1 *)0x20:
    FUN_006a41c0(param_1 + 1);
    return;
  case (undefined1 *)0x2:
  case (undefined1 *)0x19:
  case (undefined1 *)0x1a:
    uVar2 = param_1[2];
    FUN_014fb844(uVar2,param_1[3]);
    FUN_01af7af8(param_1[1],uVar2,4,0xc);
    return;
  case (undefined1 *)0x3:
    FUN_0150174c(param_1 + 1);
    return;
  case (undefined1 *)0x4:
  case (undefined1 *)0x9:
  case (undefined1 *)0xa:
  case (undefined1 *)0xb:
  case (undefined1 *)0x10:
  case (undefined1 *)0x14:
  case (undefined1 *)0x18:
  case (undefined1 *)0x1d:
    FUN_00e0febc(param_1 + 2);
    return;
  case (undefined1 *)0x8:
switchD_0154f714_caseD_8:
    FUN_019bb7e0(param_1[1],param_1[2]);
    uVar2 = param_1[4];
    uVar4 = param_1[5];
    break;
  case (undefined1 *)0x1c:
    uVar2 = param_1[1];
    FUN_0154f5a8(uVar2);
    thunk_FUN_01be4678(uVar2);
    return;
  default:
    puVar3 = (undefined1 *)0x6;
    if ((undefined1 *)0x80000000 < puVar1) {
      puVar3 = puVar1 + 0x7fffffff;
    }
    switch(puVar3) {
    case (undefined1 *)0x0:
      FUN_019bb7e0(param_1[1],param_1[2]);
      FUN_01443048(param_1[4],param_1[5]);
      return;
    case (undefined1 *)0x3:
      goto switchD_0154f714_caseD_8;
    case (undefined1 *)0x6:
      iVar5 = 4;
      if (puVar1 != (undefined1 *)0x80000000) {
        FUN_019bb7e0(puVar1,param_1[1]);
        iVar5 = 0xc;
      }
      uVar2 = *(undefined4 *)((int)param_1 + iVar5);
      uVar4 = ((undefined4 *)((int)param_1 + iVar5))[1];
      goto LAB_0154f830;
    }
  case (undefined1 *)0x6:
  case (undefined1 *)0x7:
  case (undefined1 *)0xd:
  case (undefined1 *)0xe:
  case (undefined1 *)0x1b:
    uVar2 = param_1[1];
    uVar4 = param_1[2];
  }
LAB_0154f830:
  FUN_019bb7e0(uVar2,uVar4);
  return;
}

