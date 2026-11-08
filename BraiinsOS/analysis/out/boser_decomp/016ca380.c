// FUN_016ca380 @ 016ca380 size=108 calls_out=1 calls_in=2
// strings: 

undefined8 FUN_016ca380(int *param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint *puVar5;
  
  puVar5 = (uint *)param_1[2];
  if (puVar5 == (uint *)param_1[3]) {
    iVar2 = param_1[4];
    iVar1 = param_1[5];
    param_1[4] = 0;
  }
  else {
    uVar3 = *puVar5;
    uVar4 = puVar5[1];
    param_1[2] = (int)(puVar5 + 2);
    if ((uVar4 < uVar3) || ((uint)param_1[1] < uVar4)) {
                    /* WARNING: Subroutine does not return */
      FUN_012faff4(uVar3,uVar4,param_1[1],&DAT_01d097c8);
    }
    iVar1 = uVar4 - uVar3;
    iVar2 = *param_1 + uVar3 * 8;
  }
  return CONCAT44(iVar1,iVar2);
}

