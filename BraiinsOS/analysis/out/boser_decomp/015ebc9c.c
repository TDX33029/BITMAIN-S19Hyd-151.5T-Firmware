// FUN_015ebc9c @ 015ebc9c size=192 calls_out=3 calls_in=2
// strings: 

undefined8 FUN_015ebc9c(uint *param_1)

{
  bool bVar1;
  uint uVar2;
  uint *unaff_r4;
  uint *local_18;
  undefined1 local_14;
  
  if ((*param_1 & 1) == 0) {
    uVar2 = 2;
  }
  else {
    unaff_r4 = param_1 + 2;
    do {
      if (*unaff_r4 != 0) {
        ClearExclusiveLocal();
        FUN_0197ade4(unaff_r4);
        goto LAB_015ebcd8;
      }
      bVar1 = (bool)hasExclusiveAccess(unaff_r4);
    } while (!bVar1);
    *unaff_r4 = 1;
    DataMemoryBarrier(0xb);
LAB_015ebcd8:
    uVar2 = 0;
    if ((DAT_01d51b08 & 0x7fffffff) != 0) {
      uVar2 = FUN_0197ac0c();
      uVar2 = uVar2 ^ 1;
    }
    if ((char)param_1[3] != '\0') {
      local_14 = (undefined1)uVar2;
      local_18 = unaff_r4;
                    /* WARNING: Subroutine does not return */
      FUN_013073dc(&DAT_00533467,0x2b,&local_18,&DAT_01cfd888,&DAT_01cfd990);
    }
  }
  return CONCAT44(uVar2,unaff_r4);
}

