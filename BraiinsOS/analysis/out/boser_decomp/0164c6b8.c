// FUN_0164c6b8 @ 0164c6b8 size=152 calls_out=3 calls_in=1
// strings: 9164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/tonic-0.13.1/src/service/router.rs | 9164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/tonic-0.13.1/src/service/router.rs

int FUN_0164c6b8(undefined4 param_1,int param_2)

{
  code *pcVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  char *pcVar5;
  undefined8 uVar6;
  char *pcStack_540;
  char *pcStack_53c;
  int iStack_538;
  undefined4 uStack_534;
  int iStack_530;
  uint uStack_52c;
  undefined4 uStack_528;
  code *pcStack_524;
  undefined4 uStack_51c;
  undefined4 uStack_510;
  undefined1 auStack_508 [336];
  undefined1 auStack_3b8 [396];
  char acStack_22c [512];
  uint uStack_2c;
  
  uVar6 = (**(code **)(param_2 + 0x10))();
  puVar2 = (undefined4 *)thunk_FUN_01be5118(0x70);
  if (puVar2 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0066439c(8,0x70);
  }
  puVar2[2] = &DAT_0164c7d0;
  puVar2[1] = 0x54535552;
  *puVar2 = "9164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/tonic-0.13.1/src/service/router.rs";
  FUN_01bed93e(puVar2 + 3,0,0x50);
  puVar2[0x19] = (int)uVar6;
  puVar2[0x18] = &DAT_00523849;
  puVar2[0x1a] = (int)((ulonglong)uVar6 >> 0x20);
  uStack_2c = DAT_01d53560;
  iVar3 = FUN_01be2734();
  if (iVar3 != 0) {
    FUN_01beb3de(&DAT_01d50fd8,"libunwind: _Unwind_RaiseException(ex_obj=%p)\n",puVar2);
    FUN_01beb1cc(&DAT_01d50fd8);
  }
  FUN_01bdfb74(auStack_508);
  puVar2[3] = 0;
  FUN_01be2a08(auStack_3b8,auStack_508);
  pcStack_540 = ".anonymous.";
  pcStack_53c = ".anonymous.";
  do {
    do {
      iVar3 = FUN_01be23a0(auStack_3b8,&iStack_530);
      if (iVar3 != 0) {
        iVar3 = FUN_01be2774();
        if (iVar3 == 0) {
LAB_01be0248:
          iVar4 = 0;
          iVar3 = 3;
        }
        else {
          pcVar5 = 
          "libunwind: unwind_phase1(ex_ojb=%p): __unw_get_proc_info failed => _URC_FATAL_PHASE1_ERROR\n"
          ;
LAB_01be0386:
          FUN_01beb3de(&DAT_01d50fd8,pcVar5,puVar2);
          iVar4 = FUN_01beb1cc(&DAT_01d50fd8);
          iVar3 = 3;
        }
LAB_01be024a:
        if ((DAT_01d53560 ^ uStack_2c) != 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01be31f4(iVar4,DAT_01d53560 ^ uStack_2c,0);
        }
        return iVar3;
      }
      iVar3 = FUN_01be2774();
      if (iVar3 != 0) {
        iVar3 = FUN_01be2544(auStack_3b8,acStack_22c,0x200,&iStack_538);
        if (iVar3 == 0) {
          pcVar5 = acStack_22c;
          if (uStack_52c < (uint)(iStack_530 + iStack_538)) {
            pcVar5 = pcStack_53c;
          }
        }
        else {
          pcVar5 = pcStack_540;
        }
        FUN_01be1d04(auStack_3b8,0xffffffff,&uStack_534);
        iVar3 = FUN_01be2774();
        if (iVar3 != 0) {
          FUN_01beb3de(&DAT_01d50fd8,
                       "libunwind: unwind_phase1(ex_ojb=%p): pc=0x%x, start_ip=0x%x, func=%s, lsda=0x%x, personality=0x%x\n"
                       ,puVar2,uStack_534,iStack_530,pcVar5,uStack_528,pcStack_524);
          FUN_01beb1cc(&DAT_01d50fd8);
        }
      }
      pcVar1 = pcStack_524;
    } while (pcStack_524 == (code *)0x0);
    iVar3 = FUN_01be2774();
    if (iVar3 != 0) {
      FUN_01beb3de(&DAT_01d50fd8,
                   "libunwind: unwind_phase1(ex_ojb=%p): calling personality function %p\n",puVar2,
                   pcVar1);
      FUN_01beb1cc(&DAT_01d50fd8);
    }
    puVar2[0x12] = iStack_530;
    puVar2[0x13] = uStack_510;
    puVar2[0x14] = uStack_51c;
    iVar3 = (*pcVar1)(0,puVar2,auStack_3b8);
    iVar4 = FUN_01be2774();
    if (iVar4 == 0) {
      iVar4 = 0;
    }
    else {
      FUN_01beb3de(&DAT_01d50fd8,
                   "libunwind: unwind_phase1(ex_ojb=%p): personality result %d start_ip %x ehtp %p additional %x\n"
                   ,puVar2,iVar3,puVar2[0x12],puVar2[0x13],puVar2[0x14]);
      iVar4 = FUN_01beb1cc(&DAT_01d50fd8);
    }
    if (iVar3 != 8) {
      if (iVar3 == 9) goto LAB_01be024a;
      if (iVar3 != 6) {
        iVar3 = FUN_01be2774();
        if (iVar3 == 0) goto LAB_01be0248;
        pcVar5 = "libunwind: unwind_phase1(ex_ojb=%p): _URC_FATAL_PHASE1_ERROR\n";
        goto LAB_01be0386;
      }
      iVar3 = FUN_01be2774();
      if (iVar3 != 0) {
        FUN_01beb3de(&DAT_01d50fd8,"libunwind: unwind_phase1(ex_ojb=%p): _URC_HANDLER_FOUND\n",
                     puVar2);
        FUN_01beb1cc(&DAT_01d50fd8);
      }
      iVar4 = FUN_01bdfba4(auStack_508,auStack_3b8,puVar2,0);
      iVar3 = iVar4;
      goto LAB_01be024a;
    }
    iVar3 = FUN_01be2774();
    if (iVar3 != 0) {
      FUN_01beb3de(&DAT_01d50fd8,"libunwind: unwind_phase1(ex_ojb=%p): _URC_CONTINUE_UNWIND\n",
                   puVar2);
      FUN_01beb1cc(&DAT_01d50fd8);
    }
  } while( true );
}

