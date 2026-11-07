// FUN_012b33e4 @ 012b33e4 size=72 calls_out=1 calls_in=0
// strings: 

byte FUN_012b33e4(int *param_1,undefined4 param_2)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  uVar4 = *(undefined4 *)(*param_1 + 4);
  uVar5 = *(undefined4 *)(*param_1 + 8);
  bVar2 = false;
  do {
    bVar1 = bVar2;
    if (bVar1) break;
    iVar3 = FUN_012fb940(param_2,uVar4,uVar5);
    bVar2 = true;
  } while (iVar3 == 0);
  return ~bVar1;
}

