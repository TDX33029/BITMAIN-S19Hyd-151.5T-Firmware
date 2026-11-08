// FUN_01528314 @ 01528314 size=128 calls_out=1 calls_in=0
// strings: 

undefined4 FUN_01528314(int param_1,char *param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  uVar2 = 1;
  if ((*param_2 == '\x05') && (uVar2 = 0, 2 < *(uint *)(param_2 + 0xc))) {
    uVar3 = *(undefined4 *)(param_2 + 4);
    uVar4 = *(undefined4 *)(param_2 + 8);
    iVar1 = FUN_0196b2cc(uVar3,uVar4,*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_1 + 8));
    if ((iVar1 != 0) &&
       ((iVar1 = FUN_0196b2cc(uVar3,uVar4,*(undefined4 *)(param_1 + 0x10),
                              *(undefined4 *)(param_1 + 0x14)), iVar1 != 0 &&
        (iVar1 = FUN_0196b2cc(uVar3,uVar4,*(undefined4 *)(param_1 + 0x1c),
                              *(undefined4 *)(param_1 + 0x20)), uVar2 = 0, iVar1 != 0)))) {
      uVar2 = 1;
    }
  }
  return uVar2;
}

