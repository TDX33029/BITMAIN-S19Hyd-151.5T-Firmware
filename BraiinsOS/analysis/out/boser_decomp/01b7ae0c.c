// FUN_01b7ae0c @ 01b7ae0c size=848 calls_out=10 calls_in=1
// strings: /sys/devices | %s/index%u/type | Unified | /sys/devices | %s/index%u/size

undefined8 FUN_01b7ae0c(int *param_1,int *param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined1 *puVar4;
  uint local_60;
  int local_5c;
  undefined1 auStack_4c [9];
  undefined1 local_43;
  undefined1 auStack_40 [52];
  int local_c;
  
  local_c = DAT_01d53560;
  local_60 = 0;
  do {
    if (3 < local_60) {
code_r0x01b7b118:
      if (local_c != DAT_01d53560) {
                    /* WARNING: Subroutine does not return */
        FUN_01be31f4();
      }
      return 0;
    }
    local_5c = 0;
    FUN_01bed93e(auStack_4c,0,10);
    FUN_01beb79e(auStack_40,0x32,"%s/index%u/type","/sys/devices",local_60);
    iVar1 = FUN_01be34a6(auStack_40,0);
    if (-1 < iVar1) {
      do {
        iVar2 = FUN_01bf0424(iVar1,auStack_4c,10);
        if (-1 < iVar2) break;
        piVar3 = (int *)FUN_01be3244();
      } while (*piVar3 == 4);
      FUN_01bf01d6(iVar1);
      local_43 = 0;
      iVar1 = FUN_01bedc16(auStack_4c,&DAT_00561928,4);
      if ((iVar1 == 0) || (iVar1 = FUN_01bedc16(auStack_4c,"Unified",7), iVar1 == 0)) {
        FUN_01bed93e(auStack_4c,0,10);
        FUN_01beb79e(auStack_40,0x32,"%s/index%u/size","/sys/devices",local_60);
        iVar1 = FUN_01be34a6(auStack_40,0);
        if (-1 < iVar1) {
          do {
            iVar2 = FUN_01bf0424(iVar1,auStack_4c,10);
            if (-1 < iVar2) break;
            piVar3 = (int *)FUN_01be3244();
          } while (*piVar3 == 4);
          FUN_01bf01d6(iVar1);
          local_43 = 0;
          puVar4 = (undefined1 *)FUN_01bedada(auStack_4c,0x4b);
          if (puVar4 == (undefined1 *)0x0) {
            puVar4 = (undefined1 *)FUN_01bedada(auStack_4c,0x4d);
            if (puVar4 != (undefined1 *)0x0) {
              local_5c = 0x14;
              *puVar4 = 0;
            }
          }
          else {
            local_5c = 10;
            *puVar4 = 0;
          }
          iVar1 = FUN_01bed49a(auStack_4c,0,10);
          if (iVar1 != 0x7fffffff) {
            iVar1 = iVar1 << local_5c;
            if (*param_1 == 0) {
              *param_1 = iVar1;
            }
            else {
              if (*param_2 != 0) {
                *param_3 = iVar1;
                goto code_r0x01b7b118;
              }
              *param_2 = iVar1;
            }
          }
        }
      }
    }
    local_60 = local_60 + 1;
  } while( true );
}

