// FUN_010bda48 @ 010bda48 size=208 calls_out=6 calls_in=2
// strings: 

void FUN_010bda48(int *param_1)

{
  uint uVar1;
  int iVar2;
  uint *puVar3;
  int unaff_r6;
  undefined8 uVar4;
  
  uVar4 = thunk_FUN_016de0ee(param_1,0x158);
  puVar3 = (uint *)((int)uVar4 + (int)((ulonglong)uVar4 >> 0x20));
  if (((char)puVar3[0x14] != '\x01') &&
     (puVar3 = (uint *)FUN_010c2e34(puVar3,0), puVar3 == (uint *)0x0)) {
                    /* WARNING: Subroutine does not return */
    FUN_015f853c(&DAT_018ae900);
  }
  if (*puVar3 < 0x7fffffff) {
    iVar2 = *param_1;
    unaff_r6 = param_1[2];
    *puVar3 = *puVar3 + 1;
    if (0x1c < (uint)(iVar2 - unaff_r6)) goto LAB_010bda94;
  }
  else {
    FUN_00fb71b0(&DAT_01884878);
  }
  FUN_010bf6b0(param_1,unaff_r6,0x1d,1,1);
  unaff_r6 = param_1[2];
LAB_010bda94:
  FUN_016dd1aa(param_1[1] + unaff_r6,puVar3 + 0xc,0x1d);
  uVar1 = *puVar3;
  param_1[2] = unaff_r6 + 0x1d;
  *puVar3 = uVar1 - 1;
  return;
}

