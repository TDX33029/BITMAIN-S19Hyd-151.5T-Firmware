// FUN_0004ef68 @ 0004ef68  size=1012  callers=3
// program: bmminer


void FUN_0004ef68(int param_1,int param_2,int param_3)

{
  int param6;
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  uint uVar6;
  double dVar7;
  longlong lVar8;
  undefined8 uVar9;
  char local_2028 [8196];
  
  if (((param_1 == 0) || (iVar1 = FUN_0002a584(), iVar1 == 0)) ||
     (iVar1 = FUN_0002a544(), iVar1 == 0)) {
    if (3 < DAT_000be63c) {
      builtin_strncpy(local_2028,"Note: addrInterval or corenum is not initialized.\n",0x33);
      FUN_0004948c(3,local_2028,0);
    }
    DAT_00aaa910 = 0x1ffff;
  }
  else {
    uVar2 = FUN_0002a584();
    iVar1 = uVar2 << 0x18;
    uVar6 = ((int)uVar2 >> 0x1f) << 0x18 | uVar2 >> 8;
    lVar8 = CONCAT44(uVar6,iVar1);
    uVar2 = FUN_0002a554();
    if (uVar2 == 0) {
      lVar8 = FUN_00098f3c(iVar1,uVar6,0,0);
    }
    else if (uVar2 != 1) {
      uVar5 = 1;
      do {
        uVar5 = uVar5 * 2;
      } while (uVar5 < uVar2);
      lVar8 = FUN_00098f3c(iVar1,uVar6,uVar5,(int)uVar5 >> 0x1f);
    }
    iVar1 = param_1 >> 0x1f;
    lVar8 = (longlong)param_2 * (longlong)param_3 * lVar8;
    uVar9 = FUN_00098f3c((int)lVar8,(int)((ulonglong)lVar8 >> 0x20),100,0);
    FUN_00098f3c((int)uVar9,(int)((ulonglong)uVar9 >> 0x20),param_1,iVar1);
    dVar7 = (double)FUN_00098c14();
    param6 = (uint)(0.0 < dVar7 * 0.4) * (int)(longlong)(dVar7 * 0.4);
    DAT_00aaa910 = param6;
    if (3 < DAT_000be63c) {
      uVar2 = FUN_0002a554();
      if ((uVar2 == 0) || (uVar2 == 1)) {
        uVar6 = uVar2;
      }
      else {
        uVar6 = 1;
        do {
          uVar6 = uVar6 * 2;
        } while (uVar6 < uVar2);
      }
      snprintf(local_2028,0x2000,
               "calculate_core_number(topol_get_asic_small_core_num()):%d, mid_num:%d",uVar6,param_2
              );
      FUN_0004948c(3,local_2028,0);
    }
    iVar3 = FUN_0002a514();
    uVar9 = FUN_00098f3c(0,1,iVar3,iVar3 >> 0x1f);
    uVar4 = (undefined4)((ulonglong)uVar9 >> 0x20);
    uVar2 = FUN_0002a544();
    if (uVar2 == 0) {
      uVar9 = FUN_00098f3c((int)uVar9,uVar4,0,0);
    }
    else if (uVar2 != 1) {
      uVar6 = 1;
      do {
        uVar6 = uVar6 * 2;
      } while (uVar6 < uVar2);
      uVar9 = FUN_00098f3c((int)uVar9,uVar4,uVar6,(int)uVar6 >> 0x1f);
    }
    iVar3 = (int)((ulonglong)uVar9 >> 0x20);
    uVar2 = (uint)uVar9;
    FUN_00098f3c(uVar2 * 0x19,
                 ((iVar3 * 3 + (uint)CARRY4(uVar2,uVar2) + (uint)CARRY4(uVar2 * 2,uVar2)) * 8 |
                 uVar2 * 3 >> 0x1d) + iVar3 + (uint)CARRY4(uVar2 * 0x18,uVar2),param_1,iVar1);
    dVar7 = (double)FUN_00098c14();
    if (dVar7 * 0.8 * 0.5 - 800.0 < 2800.0) {
      iVar1 = 0xaf0;
    }
    else {
      iVar3 = FUN_0002a514();
      uVar9 = FUN_00098f3c(0,1,iVar3,iVar3 >> 0x1f);
      uVar2 = FUN_0002a544();
      if ((uVar2 != 0) && (uVar6 = 1, uVar2 != 1)) {
        do {
          uVar6 = uVar6 * 2;
        } while (uVar6 < uVar2);
      }
      uVar9 = FUN_00098f3c((int)uVar9,(int)((ulonglong)uVar9 >> 0x20));
      iVar3 = (int)((ulonglong)uVar9 >> 0x20);
      uVar2 = (uint)uVar9;
      FUN_00098f3c(uVar2 * 0x19,
                   ((iVar3 * 3 + (uint)CARRY4(uVar2,uVar2) + (uint)CARRY4(uVar2 * 2,uVar2)) * 8 |
                   uVar2 * 3 >> 0x1d) + iVar3 + (uint)CARRY4(uVar2 * 0x18,uVar2),param_1,iVar1);
      dVar7 = (double)FUN_00098c14();
      dVar7 = dVar7 * 0.8 * 0.5 - 800.0;
      iVar1 = (uint)(0.0 < dVar7) * (int)(longlong)dVar7;
    }
    if ((((byte)DAT_00a6c8bc & 4) != 0) && (DAT_00a6c8ca != 0)) {
      DAT_00aaa910 = (uint)(byte)DAT_00a6c8ca * 1000 + (uint)DAT_00a6c8ca._1_1_;
    }
    FUN_0002cf80(iVar1);
    FUN_0006b86c(param6);
    if (3 < DAT_000be63c) {
      snprintf(local_2028,0x2000,"freq = %d, percent = %d, hcn = %d, timeout = %d\n",param_1,param_3
               ,iVar1,param6);
      FUN_0004948c(3,local_2028,0);
    }
  }
  return;
}

