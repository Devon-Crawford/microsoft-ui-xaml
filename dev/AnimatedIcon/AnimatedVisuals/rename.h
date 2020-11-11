﻿#pragma once
//------------------------------------------------------------------------------
// <auto-generated>
//     This code was generated by a tool.
//
//       LottieGen version:
//           7.0.0-build.57+g2cc4f0c931
//       
//       Command:
//           LottieGen -Language Cppwinrt -Namespace MU_XC_NAMESPACE -InputFile TB_01_Start (1).json
//       
//       Input file:
//           TB_01_Start (1).json (66389 bytes created 22:57-08:00 Nov 9 2020)
//       
//       LottieGen source:
//           http://aka.ms/Lottie
//
//     Changes to this file may cause incorrect behavior and will be lost if
//     the code is regenerated.
// </auto-generated>
//------------------------------------------------------------------------------

//REPLACED #include "MU_XC_NAMESPACE.TB_01_Start_1_.g.h"
#include "common.h"
#include "TB_01_Start_1_.g.h"

//namespace winrt::MU_XC_NAMESPACE
//{
    // Name:        TB_01_Start
    // Frame rate:  60 fps
    // Frame count: 110
    // Duration:    1833.3 mS
    // ___________________________________________________________________________________
    // |        Marker         |        Constant         | Frame |   mS   |   Progress   |
    // |_______________________|_________________________|_______|________|______________|
    // | NormalToHover_Start   | M_NormalToHover_Start   |   0.0 |    0.0 | 0.0F         |
    // | NormalToHover_End     | M_NormalToHover_End     |  19.0 |  316.7 | 0.172727272F |
    // | NormalToPressed_Start | M_NormalToPressed_Start |  20.0 |  333.3 | 0.181818187F |
    // | NormalToPressed_End   | M_NormalToPressed_End   |  49.0 |  816.7 | 0.445454538F |
    // | HoverToNormal_Start   | M_HoverToNormal_Start   |  50.0 |  833.3 | 0.454545468F |
    // | HoverToNormal_End     | M_HoverToNormal_End     |  59.0 |  983.3 | 0.536363661F |
    // | HoverToPressed_Start  | M_HoverToPressed_Start  |  60.0 | 1000.0 | 0.545454562F |
    // | HoverToPressed_End    | M_HoverToPressed_End    |  89.0 | 1483.3 | 0.809090912F |
    // | PressedToNormal_Start | M_PressedToNormal_Start |  90.0 | 1500.0 | 0.818181813F |
    // | PressedToNormal_End   | M_PressedToNormal_End   |  99.0 | 1650.0 | 0.899999976F |
    // | PressedToHover_Start  | M_PressedToHover_Start  | 100.0 | 1666.7 | 0.909090936F |
    // | PressedToHover_End    | M_PressedToHover_End    | 109.0 | 1816.7 | 0.9909091F   |
    // -----------------------------------------------------------------------------------
    // _________________________________________________________
    // | Theme property |  Accessor  | Type  |  Default value  |
    // |________________|____________|_______|_________________|
    // | Foreground     | Foreground | Color | #FF000000 Black |
    // ---------------------------------------------------------
    //namespace implementation
    //{
        class TB_01_Start_1_
            : public winrt::implementation::TB_01_Start_1_T<TB_01_Start_1_>
        {
            winrt::Windows::UI::Composition::CompositionPropertySet _themeProperties{ nullptr };
            winrt::Windows::UI::Color _themeForeground{ 0xFF, 0x00, 0x00, 0x00 };
            winrt::Windows::UI::Composition::CompositionPropertySet EnsureThemeProperties(winrt::Windows::UI::Composition::Compositor compositor);

            static winrt::Windows::Foundation::Numerics::float4 ColorAsVector4(winrt::Windows::UI::Color color);
        public:
            // Animation duration: 1.833 seconds.
            static constexpr int64_t c_durationTicks{ 18333333L };

            // Marker: NormalToHover_Start.
            static constexpr float M_NormalToHover_Start{ 0.0F };

            // Marker: NormalToHover_End.
            static constexpr float M_NormalToHover_End{ 0.172727272F };

            // Marker: NormalToPressed_Start.
            static constexpr float M_NormalToPressed_Start{ 0.181818187F };

            // Marker: NormalToPressed_End.
            static constexpr float M_NormalToPressed_End{ 0.445454538F };

            // Marker: HoverToNormal_Start.
            static constexpr float M_HoverToNormal_Start{ 0.454545468F };

            // Marker: HoverToNormal_End.
            static constexpr float M_HoverToNormal_End{ 0.536363661F };

            // Marker: HoverToPressed_Start.
            static constexpr float M_HoverToPressed_Start{ 0.545454562F };

            // Marker: HoverToPressed_End.
            static constexpr float M_HoverToPressed_End{ 0.809090912F };

            // Marker: PressedToNormal_Start.
            static constexpr float M_PressedToNormal_Start{ 0.818181813F };

            // Marker: PressedToNormal_End.
            static constexpr float M_PressedToNormal_End{ 0.899999976F };

            // Marker: PressedToHover_Start.
            static constexpr float M_PressedToHover_Start{ 0.909090936F };

            // Marker: PressedToHover_End.
            static constexpr float M_PressedToHover_End{ 0.9909091F };

            // Theme property: Foreground.
            static inline const winrt::Windows::UI::Color c_themeForeground{ 0xFF, 0x00, 0x00, 0x00 };


            winrt::Windows::UI::Color Foreground();
            void Foreground(winrt::Windows::UI::Color value);

            winrt::Microsoft::UI::Xaml::Controls::IAnimatedVisual TryCreateAnimatedVisual(
                winrt::Windows::UI::Composition::Compositor const& compositor,
                winrt::Windows::Foundation::IInspectable& diagnostics);

            // Converts a frame number to the corresponding progress value.
            double FrameToProgress(double frameNumber);

            // Returns a map from marker names to corresponding progress values.
            winrt::Windows::Foundation::Collections::IMapView<winrt::hstring, double> Markers();

            // Sets the color property with the given name, or does nothing if no such property
            // exists.
            void SetColorProperty(winrt::hstring const& propertyName, winrt::Windows::UI::Color value);

            // Sets the scalar property with the given name, or does nothing if no such property
            // exists.
            void SetScalarProperty(winrt::hstring const& propertyName, double value);
        };
//    }
//
//    namespace factory_implementation
//    {
//        struct TB_01_Start_1_ : TB_01_Start_1_T<TB_01_Start_1_, implementation::TB_01_Start_1_>
//        {
//        };
//    }
//}