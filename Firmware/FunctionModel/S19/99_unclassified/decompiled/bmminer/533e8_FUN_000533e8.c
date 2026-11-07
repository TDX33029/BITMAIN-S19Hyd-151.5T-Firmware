// FUN_000533e8 @ 000533e8  size=96  callers=2
// program: bmminer


undefined4 FUN_000533e8(int param_1,char *param_2)

{
  size_t sVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  
  sVar1 = strlen(param_2);
  uVar2 = FUN_00052a98(param_2,sVar1,DAT_0050fc7c);
  iVar3 = FUN_00052fdc(param_1,*(int *)(param_1 + 4) +
                               (uVar2 & ~(-1 << (*(uint *)(param_1 + 8) & 0xff))) * 8,param_2,uVar2)
  ;
  uVar4 = 0;
  if (iVar3 != 0) {
    uVar4 = *(undefined4 *)(iVar3 + 0x14);
  }
  return uVar4;
}

