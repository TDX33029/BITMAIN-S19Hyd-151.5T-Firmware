// FUN_00054654 @ 00054654  size=1060  callers=1
// program: bmminer


int FUN_00054654(void)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  int iVar7;
  float fVar8;
  double param4;
  double param3;
  char acStack_2040 [8196];
  
  iVar7 = 0;
  uVar6 = 0;
  do {
    iVar1 = FUN_0002a6f0(uVar6);
    if (iVar1 != 0) {
      iVar1 = 0;
      do {
        FUN_0006c86c(uVar6);
        pcVar3 = (char *)FUN_0002a4e4();
        iVar2 = strcmp(pcVar3,"HHB56611");
        if (iVar2 == 0) {
          thunk_FUN_0006e974(uVar6 & 0xff);
          FUN_0004bf68(10);
        }
        else {
          sleep(3);
          FUN_0004bf68(1000);
          if (DAT_000c94e4 != '\0') {
            if (3 < DAT_000be63c) {
              snprintf(acStack_2040,0x2000,"pic enabled for chain %d, press anykey to continue...",
                       uVar6);
              FUN_0004948c(3,acStack_2040,0);
            }
            _IO_getc(stdin);
          }
        }
        FUN_0006c8cc(uVar6);
        pcVar3 = (char *)FUN_0002a4e4();
        iVar2 = strcmp(pcVar3,"HHB56611");
        if (iVar2 == 0) {
          FUN_0004bf68(100);
        }
        else {
          FUN_0004bf68(300);
          FUN_0006c86c(uVar6);
          FUN_0004bf68(1000);
          FUN_0006c8cc(uVar6);
          FUN_0004bf68(300);
        }
        FUN_00046048(uVar6,0);
        iVar2 = FUN_0002c3f4();
        if ((iVar2 != 0) && (iVar2 = FUN_0002c444(), iVar2 != 0)) {
          uVar5 = FUN_0002c5bc(uVar6 & 0xff);
          FUN_0002aa60(uVar6,uVar5);
        }
        iVar2 = FUN_0002aacc(uVar6);
        if (3 < DAT_000be63c) {
          snprintf(acStack_2040,0x2000,"Chain[%d]: find %d asic, times %d\n",uVar6,iVar2,iVar1);
          FUN_0004948c(3,acStack_2040,0);
        }
        iVar4 = FUN_0002a514();
        if (iVar2 == iVar4) break;
        pcVar3 = (char *)FUN_0002a4e4();
        iVar2 = strcmp(pcVar3,"HHB56611");
        if (iVar2 == 0) {
          thunk_FUN_0006eaac(uVar6 & 0xff);
        }
        else {
          FUN_0006c86c(uVar6);
          FUN_0004bf68(1000);
        }
        iVar1 = iVar1 + 1;
      } while (iVar1 != 3);
      iVar1 = FUN_0002aacc(uVar6);
      iVar2 = FUN_0002a514();
      if (iVar2 != iVar1) {
        if (3 < DAT_000be63c) {
          snprintf(acStack_2040,0x2000,"Chain %d only find %d asic, will power off hash board %d\n",
                   uVar6,iVar1,uVar6);
          FUN_0004948c(3,acStack_2040,0);
        }
        iVar7 = -1;
        FUN_00056e88(1,1 << (uVar6 & 0xff));
        FUN_0002a654(uVar6,0);
      }
    }
    uVar6 = uVar6 + 1;
  } while (uVar6 != 4);
  iVar1 = FUN_00024f54();
  if (iVar1 != 0) {
    if (iVar7 == 0) {
      pthread_setcancelstate(1,(int *)0x0);
      param3 = (double)FUN_000243f0(0,1);
      param4 = (double)FUN_00073f10();
      fVar8 = (float)FUN_00024efc();
      uVar6 = FUN_00077f64(0,0);
      pthread_setcancelstate(0,(int *)0x0);
      if (DAT_000be63c < 4) {
        return 0;
      }
    }
    else {
      iVar1 = 0;
      do {
        iVar2 = FUN_0002a6f0(iVar1);
        if (iVar2 != 0) {
          FUN_0002a654(iVar1,0);
        }
        iVar1 = iVar1 + 1;
      } while (iVar1 != 4);
      pthread_setcancelstate(1,(int *)0x0);
      param3 = (double)FUN_000243f0(0,1);
      param4 = (double)FUN_00073f10();
      fVar8 = (float)FUN_00024efc();
      uVar6 = FUN_00077f64(0);
      pthread_setcancelstate(0,(int *)0x0);
      if (DAT_000be63c < 4) goto LAB_00054738;
    }
    snprintf(acStack_2040,0x2000,"get power info:%f, %f, %f, 0x%08x",param3,param4,(double)fVar8,
             uVar6);
    FUN_0004948c(3,acStack_2040,0);
  }
  if (iVar7 == 0) {
    return 0;
  }
LAB_00054738:
  iVar1 = FUN_000542f8();
  if (3 < DAT_000be63c) {
    snprintf(acStack_2040,0x2000,"ATTENTION: Failed to find the chip on the %d consecutive startup",
             iVar1);
    FUN_0004948c(3,acStack_2040,0);
  }
  FUN_0004e8c8(10,"asic number is not right");
  return iVar7;
}

