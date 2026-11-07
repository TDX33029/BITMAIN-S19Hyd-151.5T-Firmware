// FUN_01be2d7c @ 01be2d7c size=90 calls_out=1 calls_in=2
// strings: 

undefined8 * FUN_01be2d7c(undefined8 *param_1)

{
  uint uVar1;
  int *piVar2;
  undefined8 *puVar3;
  uint uVar4;
  int iVar5;
  
  puVar3 = param_1 + 3;
  iVar5 = *(int *)((int)param_1 + 0xc);
  if (iVar5 < *(int *)(param_1 + 2)) {
    puVar3 = (undefined8 *)((int)puVar3 + iVar5);
  }
  else {
    uVar1 = *(uint *)(param_1 + 1);
    software_interrupt(0);
    if ((int)uVar1 < 1) {
      uVar4 = (uint)(uVar1 != 0xfffffffe) & uVar1 >> 0x1f;
      if (uVar4 == 0) {
        return (undefined8 *)0x0;
      }
      piVar2 = (int *)FUN_01be3244(uVar1,uVar4,0x800);
      *piVar2 = -uVar1;
      return (undefined8 *)0x0;
    }
    *(uint *)(param_1 + 2) = uVar1;
    iVar5 = 0;
    *(undefined4 *)((int)param_1 + 0xc) = 0;
  }
  *(uint *)((int)param_1 + 0xc) = iVar5 + (uint)*(ushort *)(puVar3 + 2);
  *param_1 = puVar3[1];
  return puVar3;
}

