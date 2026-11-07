// FUN_009ed890 @ 009ed890 size=380 calls_out=6 calls_in=0
// strings: 

void FUN_009ed890(undefined4 *param_1)

{
  undefined4 *puVar1;
  code *pcVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  uint uVar6;
  undefined4 *puVar7;
  uint uVar8;
  int local_3c;
  uint local_38;
  undefined4 local_34;
  uint local_30;
  undefined4 *local_2c;
  
switchD_009ed8b8_caseD_0:
  do {
    FUN_00a01438(&local_3c,*param_1,param_1[1]);
    uVar6 = local_38;
    iVar3 = local_3c;
    if (local_3c == -0x7fffffff) {
      uVar5 = 1;
    }
    else if (local_3c == -0x80000000) {
LAB_009ed8ac:
      uVar5 = 3;
    }
    else {
      FUN_009fa1f8(&local_30,param_1 + 4,local_38,local_34);
      while( true ) {
        puVar1 = local_2c;
        if ((char)local_30 == '\x04') {
          uVar5 = 2;
        }
        else {
          uVar5 = (local_30 & 0xffff) >> 8;
          uVar8 = local_30 & 0xff;
          if (uVar8 != 4) {
            if ((-0x7fffffff < iVar3) && (iVar3 != 0)) {
              thunk_FUN_016d3fb4(uVar6);
            }
            if (2 < uVar8) {
              uVar4 = *puVar1;
              puVar7 = (undefined4 *)puVar1[1];
              pcVar2 = (code *)*puVar7;
              if (pcVar2 != (code *)0x0) {
                (*pcVar2)(uVar4);
              }
              if (puVar7[1] != 0) {
                thunk_FUN_016d3fb4(uVar4);
              }
              thunk_FUN_016d3fb4(puVar1);
            }
            goto switchD_009ed8b8_caseD_0;
          }
        }
        if ((-0x7fffffff < iVar3) && (iVar3 != 0)) {
          thunk_FUN_016d3fb4(uVar6);
        }
        if (uVar5 != 2) goto LAB_009ed8b0;
        FUN_00a02968(&local_3c,*param_1,param_1[1]);
        uVar6 = local_38;
        iVar3 = local_3c;
        if (local_3c == -0x80000000) goto LAB_009ed8ac;
        if (local_3c == -0x7fffffff) break;
        FUN_009fa1f8(&local_30,param_1 + 4,local_38,local_34);
      }
      uVar5 = local_38 & 0xff;
    }
LAB_009ed8b0:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(uVar5) {
    case 1:
    case 3:
      FUN_009ffc8c(param_1[2],param_1[3]);
      FUN_009eda84(param_1);
      return;
    }
  } while( true );
}

