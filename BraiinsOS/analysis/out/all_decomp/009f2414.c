// FUN_009f2414 @ 009f2414 size=500 calls_out=5 calls_in=1
// strings: 

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_009f2414(int *param_1,int *param_2,int param_3,undefined4 param_4,undefined4 param_5)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int unaff_r8;
  uint uVar8;
  int unaff_r10;
  uint uVar9;
  int *local_2c;
  undefined1 local_28;
  
  do {
    if (*param_2 != 0) {
      ClearExclusiveLocal();
      FUN_015bf680(param_2);
      goto LAB_009f2444;
    }
    bVar2 = (bool)hasExclusiveAccess(param_2);
  } while (!bVar2);
  *param_2 = 1;
  DataMemoryBarrier(0xb);
LAB_009f2444:
  uVar9 = 0;
  if ((DAT_018dd988 & 0x7fffffff) == 0) {
    cVar1 = (char)param_2[1];
  }
  else {
    uVar9 = FUN_015bf3f8();
    uVar9 = uVar9 ^ 1;
    cVar1 = (char)param_2[1];
  }
  if (cVar1 != '\0') {
    local_28 = (undefined1)uVar9;
    local_2c = param_2;
                    /* WARNING: Subroutine does not return */
    FUN_00fb74f8(&DAT_00418ec6,0x2b,&local_2c,&DAT_0186b3cc,&DAT_018ae0d0);
  }
  uVar8 = param_2[4];
  uVar7 = 0xffffffff;
  iVar3 = param_2[3];
  iVar5 = uVar8 * 0xc;
  iVar6 = iVar3;
  do {
    if (iVar5 == 0) {
      iVar5 = 0;
      goto LAB_009f2514;
    }
    piVar4 = (int *)(iVar6 + 4);
    iVar5 = iVar5 + -0xc;
    uVar7 = uVar7 + 1;
    iVar6 = iVar6 + 0xc;
  } while (*piVar4 != param_3);
  if (uVar7 < uVar8) {
    piVar4 = (int *)(iVar3 + uVar7 * 0xc);
    iVar5 = *piVar4;
    unaff_r8 = piVar4[1];
    unaff_r10 = piVar4[2];
    iVar3 = FUN_016dd52c(piVar4,piVar4 + 3,(uVar8 + ~uVar7) * 0xc);
    uVar8 = uVar8 - 1;
    param_2[4] = uVar8;
    if (iVar5 != 0) {
LAB_009f2514:
      if (uVar8 == 0) {
        iVar3 = param_2[7];
      }
      DataMemoryBarrier(0xb);
      *(bool *)(param_2 + 8) = uVar8 == 0 && iVar3 == 0;
      DataMemoryBarrier(0xb);
      *param_1 = iVar5;
      param_1[1] = unaff_r8;
      param_1[2] = unaff_r10;
      if (((uVar9 == 0) && ((DAT_018dd988 & 0x7fffffff) != 0)) &&
         (iVar5 = FUN_015bf3f8(), iVar5 == 0)) {
        *(undefined1 *)(param_2 + 1) = 1;
      }
      DataMemoryBarrier(0xb);
      do {
        iVar5 = *param_2;
        bVar2 = (bool)hasExclusiveAccess(param_2);
      } while (!bVar2);
      *param_2 = 0;
      if (iVar5 == 2) {
        software_interrupt(0);
        FUN_016d3496(param_2,0x81,1,param_5);
        return;
      }
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00602938(uVar7,uVar8,&DAT_018ae120);
}

