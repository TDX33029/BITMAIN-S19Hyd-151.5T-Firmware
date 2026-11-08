// FUN_01be81c0 @ 01be81c0 size=70 calls_out=1 calls_in=1
// strings: 

undefined * FUN_01be81c0(int param_1)

{
  int iVar1;
  undefined *puVar2;
  uint uVar3;
  int iVar4;
  
  uVar3 = 0xf;
  puVar2 = &DAT_0056737c;
  iVar4 = 0;
  while( true ) {
    iVar1 = FUN_01bed842(param_1,puVar2,uVar3);
    if ((iVar1 == 0) &&
       ((&DAT_0056737c)[uVar3 + iVar4 * 0x14] == (*(byte *)(param_1 + uVar3) & puVar2[0x11])))
    break;
    uVar3 = (uint)(byte)puVar2[0x24];
    iVar4 = iVar4 + 1;
    puVar2 = puVar2 + 0x14;
  }
  return puVar2;
}

