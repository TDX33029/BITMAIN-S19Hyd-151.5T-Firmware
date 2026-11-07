// FUN_019fa158 @ 019fa158 size=168 calls_out=1 calls_in=15
// strings: overflow when adding duration to instant

void FUN_019fa158(uint *param_1,undefined4 param_2,uint param_3,uint param_4,int param_5,
                 undefined4 param_6,uint param_7,uint param_8,int param_9)

{
  uint uVar1;
  undefined1 *puVar2;
  uint uVar3;
  uint uVar4;
  bool bVar5;
  
  uVar4 = param_3 + param_7;
  uVar1 = param_4 + param_8 + (uint)CARRY4(param_3,param_7);
  if ((int)param_8 < 0 != (int)((param_4 ^ uVar1) & ~(param_4 ^ param_8)) < 0) {
LAB_019fa1c4:
                    /* WARNING: Subroutine does not return */
    FUN_0130739c("overflow when adding duration to instant",0x28,&DAT_01d281d4);
  }
  puVar2 = (undefined1 *)(param_9 + param_5);
  if (&DAT_3b9aca00 <= puVar2) {
    bVar5 = 0xfffffffe < uVar4;
    uVar4 = uVar4 + 1;
    uVar3 = uVar1 + bVar5;
    if ((int)((uVar1 ^ uVar3) & ~uVar1) < 0) goto LAB_019fa1c4;
    puVar2 = puVar2 + -1000000000;
    uVar1 = uVar3;
  }
  *param_1 = uVar4;
  param_1[1] = uVar1;
  param_1[2] = (uint)puVar2;
  return;
}

