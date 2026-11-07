// FUN_015fdf18 @ 015fdf18 size=212 calls_out=1 calls_in=0
// strings: 

void FUN_015fdf18(undefined1 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  char *pcVar2;
  undefined4 local_30;
  undefined1 local_29;
  undefined *local_28;
  undefined4 local_24;
  undefined **local_20;
  undefined1 *local_1c;
  undefined1 *local_18;
  code *local_14;
  undefined1 *local_10;
  code *local_c;
  
  local_10 = (undefined1 *)&local_30;
  uVar1 = 0x34;
  pcVar2 = 
  "a slash (/) was missing between the type and subtypean equals sign (=) was missing between a parameter and its valuea quote (\") was missing from a parameter value123application/vnd.lotus-1-2-3323text/h323text/vnd.in3d.3dml3dsimage/x-3ds3g2video/3gpp23gpvideo/3gpp7zapplication/x-7z-compressedaaaudio/audibleaabapplication/x-authorware-binaacaudio/aacaaf"
  ;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*param_1) {
  case 1:
    uVar1 = 0x40;
    pcVar2 = 
    "an equals sign (=) was missing between a parameter and its valuea quote (\") was missing from a parameter value123application/vnd.lotus-1-2-3323text/h323text/vnd.in3d.3dml3dsimage/x-3ds3g2video/3gpp23gpvideo/3gpp7zapplication/x-7z-compressedaaaudio/audibleaabapplication/x-authorware-binaacaudio/aacaaf"
    ;
    break;
  case 2:
    uVar1 = 0x2e;
    pcVar2 = 
    "a quote (\") was missing from a parameter value123application/vnd.lotus-1-2-3323text/h323text/vnd.in3d.3dml3dsimage/x-3ds3g2video/3gpp23gpvideo/3gpp7zapplication/x-7z-compressedaaaudio/audibleaabapplication/x-authorware-binaacaudio/aacaaf"
    ;
    break;
  case 3:
    local_30 = *(undefined4 *)(param_1 + 4);
    local_29 = param_1[1];
    local_24 = 0x20;
    local_28 = &DAT_0056aea8;
    local_c = FUN_012fd02c;
    local_18 = &local_29;
    local_20 = &local_28;
    local_14 = FUN_012fd6b4;
    local_1c = &LAB_018a13b8;
    FUN_012fa178(*param_2,param_2[1],&DAT_005a8801,&local_20);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x015fdf7c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_2[1] + 0xc))(*param_2,pcVar2,uVar1);
  return;
}

