// FUN_0188e300 @ 0188e300 size=416 calls_out=4 calls_in=2
// strings: called after complete

undefined8 FUN_0188e300(undefined4 *param_1,int *param_2)

{
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  uint *unaff_r5;
  int *piVar6;
  uint unaff_r8;
  bool bVar7;
  undefined8 uVar8;
  
  piVar6 = (int *)*param_1;
  if (piVar6 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_012fb100("called after complete",0x2b,&DAT_01d29940);
  }
  uVar1 = FUN_019ec670(param_2);
  if ((uVar1 & 0xff) == 2) {
    uVar1 = 0;
LAB_0188e348:
    uVar2 = piVar6[6];
    DataMemoryBarrier(0xb);
    if ((uVar2 & 2) == 0) {
      unaff_r5 = (uint *)0x0;
      if ((uVar2 & 4) == 0) {
        unaff_r5 = (uint *)(piVar6 + 6);
        if ((uVar2 & 1) == 0) {
LAB_0188e3c4:
          if ((uVar2 & 1) == 0) goto LAB_0188e3cc;
        }
        else {
          iVar4 = param_2[1];
          iVar5 = piVar6[5];
          bVar7 = iVar5 == iVar4;
          if (bVar7) {
            iVar4 = *param_2;
            iVar5 = piVar6[4];
          }
          if (bVar7 && iVar5 == iVar4) goto LAB_0188e3c4;
          DataMemoryBarrier(0xb);
          do {
            uVar2 = *unaff_r5;
            bVar7 = (bool)hasExclusiveAccess(unaff_r5);
          } while (!bVar7);
          *unaff_r5 = uVar2 & 0xfffffffe;
          DataMemoryBarrier(0xb);
          if ((uVar2 & 2) != 0) {
            DataMemoryBarrier(0xb);
            do {
              bVar7 = (bool)hasExclusiveAccess(unaff_r5);
            } while (!bVar7);
            *unaff_r5 = *unaff_r5 | 1;
            DataMemoryBarrier(0xb);
            goto LAB_0188e434;
          }
          (**(code **)(piVar6[4] + 0xc))(piVar6[5]);
LAB_0188e3cc:
          uVar8 = (**(code **)*param_2)(param_2[1]);
          *(undefined8 *)(piVar6 + 4) = uVar8;
          DataMemoryBarrier(0xb);
          do {
            uVar2 = *unaff_r5;
            bVar7 = (bool)hasExclusiveAccess(unaff_r5);
          } while (!bVar7);
          *unaff_r5 = uVar2 | 1;
          DataMemoryBarrier(0xb);
          if ((uVar2 & 2) != 0) goto LAB_0188e434;
        }
        FUN_019edbc4(uVar1,unaff_r8);
        goto LAB_0188e410;
      }
    }
    else {
LAB_0188e434:
      unaff_r5 = (uint *)piVar6[7];
      piVar6[7] = 0;
    }
    FUN_019edbc4(0,unaff_r8);
    DataMemoryBarrier(0xb);
    do {
      iVar5 = *piVar6;
      bVar7 = (bool)hasExclusiveAccess(piVar6);
    } while (!bVar7);
    *piVar6 = iVar5 + -1;
    if (iVar5 == 1) {
      DataMemoryBarrier(0xb);
      FUN_0185203c(*param_1);
    }
    uVar3 = 0;
    *param_1 = 0;
  }
  else {
    if ((uVar1 & 1) == 0) {
      unaff_r8 = (uVar1 & 0xffffff) >> 0x10;
      uVar1 = (uVar1 & 0xffffff) >> 8;
      goto LAB_0188e348;
    }
LAB_0188e410:
    uVar3 = 1;
  }
  return CONCAT44(unaff_r5,uVar3);
}

