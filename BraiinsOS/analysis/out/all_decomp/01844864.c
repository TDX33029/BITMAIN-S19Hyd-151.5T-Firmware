// FUN_01844864 @ 01844864 size=422 calls_out=6 calls_in=2
// strings: libunwind: __unw_set_reg(cursor=%p; regNum=%d; value=0x%x)  | LIBUNWIND_PRINT_APIS

/* WARNING: Control flow encountered bad instruction data */

void FUN_01844864(int *param_1,uint param_2,int param_3)

{
  undefined4 uVar1;
  undefined1 *puVar2;
  undefined1 *extraout_r1;
  undefined1 *extraout_r1_00;
  undefined1 *extraout_r1_01;
  int iVar3;
  code *pcVar4;
  code *pcVar5;
  undefined8 uVar6;
  int local_44;
  int iStack_40;
  int iStack_3c;
  int iStack_38;
  int local_34;
  int iStack_30;
  int iStack_2c;
  int iStack_28;
  int local_24;
  int iStack_20;
  uint local_1c;
  
  local_1c = DAT_018ddaf8;
  if (DAT_018dffe0 == '\0') {
    iVar3 = FUN_016d2b7c("LIBUNWIND_PRINT_APIS");
    DAT_018dffdf = iVar3 != 0;
    DAT_018dffe0 = '\x01';
  }
  uVar1 = 0;
  if (DAT_018dffdf != '\0') {
    FUN_016db0c6(&DAT_018db5c0,"libunwind: __unw_set_reg(cursor=%p, regNum=%d, value=0x%x)\n",
                 param_1,param_2,param_3);
    uVar1 = FUN_016daeb4(&DAT_018db5c0);
  }
  iVar3 = *param_1;
  puVar2 = &LAB_01843d84_1;
  if (*(code **)(iVar3 + 8) == (code *)&LAB_01843d84_1) {
    uVar6 = CONCAT44(&LAB_01843d84_1,uVar1);
    if ((param_2 + 2 < 2) || (uVar6 = CONCAT44(&LAB_01843d84_1,uVar1), param_2 < 0x10)) {
LAB_018448c4:
      puVar2 = (undefined1 *)((ulonglong)uVar6 >> 0x20);
      if (*(code **)(iVar3 + 0x10) == (code *)&DAT_018440ad) {
        if (0xf < (int)param_2) {
          if (param_2 != 0x8f) goto LAB_01844a10;
          param_1[0x12] = param_3;
          uVar1 = 0;
          goto LAB_01844904;
        }
        if ((int)param_2 < -2) {
LAB_01844a10:
          FUN_01843e70((int)uVar6);
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
        switch(param_2) {
        case 0:
        case 1:
        case 2:
        case 3:
        case 4:
        case 5:
        case 6:
        case 7:
        case 8:
        case 9:
        case 10:
        case 0xb:
        case 0xc:
          param_1[param_2 + 2] = param_3;
          break;
        default:
          param_1[0xf] = param_3;
          break;
        case 0xe:
          uVar1 = 0;
          param_1[0x10] = param_3;
          goto LAB_01844904;
        case 0xffffffff:
        case 0xf:
          param_1[0x11] = param_3;
        }
      }
      else {
        (**(code **)(iVar3 + 0x10))(param_1,param_2,param_3);
        puVar2 = extraout_r1_00;
      }
      if (param_2 == 0xffffffff) {
        iVar3 = *param_1;
        if (*(code **)(iVar3 + 0x24) == (code *)&LAB_01843df8_1) {
          if ((char)param_1[0x60] == '\0') {
            local_44 = param_1[0x56];
            iStack_40 = param_1[0x57];
            iStack_3c = param_1[0x58];
            iStack_38 = param_1[0x59];
            local_34 = param_1[0x5a];
            iStack_30 = param_1[0x5b];
            iStack_2c = param_1[0x5c];
            iStack_28 = param_1[0x5d];
            local_24 = param_1[0x5e];
            iStack_20 = param_1[0x5f];
          }
          else {
            FUN_016dd606(&local_44,0,0x28);
          }
        }
        else {
          (**(code **)(iVar3 + 0x24))(param_1,&local_44);
          iVar3 = *param_1;
        }
        (**(code **)(iVar3 + 0x34))(param_1,0);
        puVar2 = extraout_r1;
        if (local_34 != 0) {
          pcVar5 = *(code **)(*param_1 + 0xc);
          pcVar4 = *(code **)(*param_1 + 0x10);
          if (pcVar5 == (code *)&DAT_01844075) {
            uVar6 = CONCAT44(&DAT_01844075,param_1[0xf]);
          }
          else {
            uVar6 = (*pcVar5)(param_1,0xfffffffe);
          }
          puVar2 = (undefined1 *)((ulonglong)uVar6 >> 0x20);
          if (pcVar4 == (code *)&DAT_018440ad) {
            param_1[0xf] = (int)uVar6 + local_34;
          }
          else {
            (*pcVar4)(param_1,0xfffffffe);
            puVar2 = extraout_r1_01;
          }
        }
      }
      uVar1 = 0;
      goto LAB_01844904;
    }
  }
  else {
    uVar6 = (**(code **)(iVar3 + 8))(param_1,param_2);
    puVar2 = (undefined1 *)((ulonglong)uVar6 >> 0x20);
    if ((int)uVar6 != 0) {
      iVar3 = *param_1;
      goto LAB_018448c4;
    }
  }
  uVar1 = 0xffffe672;
LAB_01844904:
  if ((DAT_018ddaf8 ^ local_1c) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_016d2b78(uVar1,puVar2,DAT_018ddaf8 ^ local_1c,0);
  }
  return;
}

